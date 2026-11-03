// kuserfix.cc -- real ARMv8.1 atomics detection for the MSVC ARM64 CRT.
//
// The sysroot's patch_arm64_kuser.py rewrites the EL0 path of
// _InterlockedDetectSupport to report "no LSE" unconditionally, so CRT
// _Interlocked* helpers always use their ldxr/stxr fallback loops.
// Link this object to keep real CPU feature detection instead:
//
//     clang++ ... -lkuserfix -Wl,-wrap:_InterlockedDetectSupport
//                            -Wl,-wrap:_InterlockedDetectSupportEH
//
// (kuserfix.lib lives in lib/aarch64-unknown-windows-msvc/; passing the
// prebuilt object on the link line works too.)  -wrap redirects every
// `b _InterlockedDetectSupport` site in the CRT's atomics.obj here, so
// IsProcessorFeaturePresent does the detection through the documented
// API -- correct on real Windows and under Wine regardless of where the
// shared user data page is mapped.
//
// The stub is entered with a private convention, NOT the AArch64 PCS:
//   x15 = continuation address (the stub returns with `br x15`)
//   x16/x17 = scratch
//   x0..x14 stay live -- they hold the interlocked op's operands
//   x30 still holds the outer caller's return address
// so the trampoline saves/restores x0-x15 and x30 around the API call.

extern "C" __declspec(dllimport) int IsProcessorFeaturePresent(unsigned long);
extern "C" volatile unsigned int _AtomicsV81Support;

enum : unsigned long {
    kPfArmV81Atomic = 34,  // PF_ARM_V81_ATOMIC_INSTRUCTIONS_AVAILABLE
    kPfArmLse2 = 62,       // PF_ARM_LSE2_AVAILABLE (rt variant bit 1)
};

extern "C" void KuserAtomicsDetect()
{
    _AtomicsV81Support = 0x80000000u |
        (unsigned)IsProcessorFeaturePresent(kPfArmV81Atomic) |
        ((unsigned)IsProcessorFeaturePresent(kPfArmLse2) << 1);
}

__asm__(
    ".globl __wrap__InterlockedDetectSupport\n"
    ".p2align 2\n"
    "__wrap__InterlockedDetectSupport:\n"
    "   sub  sp, sp, #0x90\n"
    "   stp  x0,  x1,  [sp]\n"
    "   stp  x2,  x3,  [sp, #0x10]\n"
    "   stp  x4,  x5,  [sp, #0x20]\n"
    "   stp  x6,  x7,  [sp, #0x30]\n"
    "   stp  x8,  x9,  [sp, #0x40]\n"
    "   stp  x10, x11, [sp, #0x50]\n"
    "   stp  x12, x13, [sp, #0x60]\n"
    "   stp  x14, x30, [sp, #0x70]\n"
    "   str  x15,      [sp, #0x80]\n"
    "   bl   KuserAtomicsDetect\n"
    "   ldr  x15,      [sp, #0x80]\n"
    "   ldp  x14, x30, [sp, #0x70]\n"
    "   ldp  x12, x13, [sp, #0x60]\n"
    "   ldp  x10, x11, [sp, #0x50]\n"
    "   ldp  x8,  x9,  [sp, #0x40]\n"
    "   ldp  x6,  x7,  [sp, #0x30]\n"
    "   ldp  x4,  x5,  [sp, #0x20]\n"
    "   ldp  x2,  x3,  [sp, #0x10]\n"
    "   ldp  x0,  x1,  [sp]\n"
    "   add  sp, sp, #0x90\n"
    "   br   x15\n"
    ".globl __wrap__InterlockedDetectSupportEH\n"
    ".p2align 2\n"
    "__wrap__InterlockedDetectSupportEH:\n"
    "   sub  sp, sp, #0x90\n"
    "   stp  x0,  x1,  [sp]\n"
    "   stp  x2,  x3,  [sp, #0x10]\n"
    "   stp  x4,  x5,  [sp, #0x20]\n"
    "   stp  x6,  x7,  [sp, #0x30]\n"
    "   stp  x8,  x9,  [sp, #0x40]\n"
    "   stp  x10, x11, [sp, #0x50]\n"
    "   stp  x12, x13, [sp, #0x60]\n"
    "   stp  x14, x30, [sp, #0x70]\n"
    "   str  x15,      [sp, #0x80]\n"
    "   bl   KuserAtomicsDetect\n"
    "   ldr  x15,      [sp, #0x80]\n"
    "   ldp  x14, x30, [sp, #0x70]\n"
    "   ldp  x12, x13, [sp, #0x60]\n"
    "   ldp  x10, x11, [sp, #0x50]\n"
    "   ldp  x8,  x9,  [sp, #0x40]\n"
    "   ldp  x6,  x7,  [sp, #0x30]\n"
    "   ldp  x4,  x5,  [sp, #0x20]\n"
    "   ldp  x2,  x3,  [sp, #0x10]\n"
    "   ldp  x0,  x1,  [sp]\n"
    "   add  sp, sp, #0x90\n"
    "   br   x15\n");
