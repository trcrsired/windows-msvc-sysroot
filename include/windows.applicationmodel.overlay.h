
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __windows2Eapplicationmodel2Eoverlay_h__
#define __windows2Eapplicationmodel2Eoverlay_h__
#ifndef __windows2Eapplicationmodel2Eoverlay_p_h__
#define __windows2Eapplicationmodel2Eoverlay_p_h__


#pragma once

//
// Deprecated attribute support
//

#pragma push_macro("DEPRECATED")
#undef DEPRECATED

#if !defined(DISABLE_WINRT_DEPRECATION)
#if defined(__cplusplus)
#if __cplusplus >= 201402
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#elif defined(_MSC_VER)
#if _MSC_VER >= 1900
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#else
#define DEPRECATED(x) __declspec(deprecated(x))
#define DEPRECATEDENUMERATOR(x)
#endif // _MSC_VER >= 1900
#else // Not Standard C++ or MSVC, ignore the construct.
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  // C++ deprecation
#else // C - disable deprecation
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif
#else // Deprecation is disabled
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  /* DEPRECATED */

// Disable Deprecation for this header, MIDL verifies that cross-type access is acceptable
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x140000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "asyncinfo.h"
#include "eventtoken.h"
#include "windowscontracts.h"
#include "windows.foundation.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                interface IOverlayActivatedEventArgs;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs ABI::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                interface IOverlayApp;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp ABI::Windows::ApplicationModel::Overlay::IOverlayApp

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                interface IOverlayAppOptions;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions ABI::Windows::ApplicationModel::Overlay::IOverlayAppOptions

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                interface IOverlayAppStatics;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics ABI::Windows::ApplicationModel::Overlay::IOverlayAppStatics

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                interface IOverlayCommand;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand ABI::Windows::ApplicationModel::Overlay::IOverlayCommand

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                interface IOverlayCommandFactory;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory ABI::Windows::ApplicationModel::Overlay::IOverlayCommandFactory

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                interface IOverlayDisconnectedEventArgs;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs ABI::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                interface IOverlayVisualTransitionEventArgs;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs ABI::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#ifndef DEF___FIEventHandler_1_IInspectable_USE
#define DEF___FIEventHandler_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b"))
IEventHandler<IInspectable*> : IEventHandler_impl<IInspectable*>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.EventHandler`1<Object>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<IInspectable*> __FIEventHandler_1_IInspectable_t;
#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::__FIEventHandler_1_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_IInspectable_USE */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                class OverlayActivatedEventArgs;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs_USE
#define DEF___FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ff54ecb8-ff9c-56ce-94e8-7940347bde0d"))
IEventHandler<ABI::Windows::ApplicationModel::Overlay::OverlayActivatedEventArgs*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Overlay::OverlayActivatedEventArgs*, ABI::Windows::ApplicationModel::Overlay::IOverlayActivatedEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.EventHandler`1<Windows.ApplicationModel.Overlay.OverlayActivatedEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::ApplicationModel::Overlay::OverlayActivatedEventArgs*> __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs_t;
#define __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs ABI::Windows::Foundation::__FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs_USE */

#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                class OverlayDisconnectedEventArgs;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs_USE
#define DEF___FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("093b0ad4-0a75-52eb-bf81-d6ff536a1f54"))
IEventHandler<ABI::Windows::ApplicationModel::Overlay::OverlayDisconnectedEventArgs*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Overlay::OverlayDisconnectedEventArgs*, ABI::Windows::ApplicationModel::Overlay::IOverlayDisconnectedEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.EventHandler`1<Windows.ApplicationModel.Overlay.OverlayDisconnectedEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::ApplicationModel::Overlay::OverlayDisconnectedEventArgs*> __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs_t;
#define __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs ABI::Windows::Foundation::__FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs_USE */

#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                class OverlayVisualTransitionEventArgs;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs_USE
#define DEF___FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("064695cb-fa4f-5514-895b-bda8f1d0f830"))
IEventHandler<ABI::Windows::ApplicationModel::Overlay::OverlayVisualTransitionEventArgs*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Overlay::OverlayVisualTransitionEventArgs*, ABI::Windows::ApplicationModel::Overlay::IOverlayVisualTransitionEventArgs*>>
{
    static const wchar_t* z_get_rc_name_impl()
    {
        return L"Windows.Foundation.EventHandler`1<Windows.ApplicationModel.Overlay.OverlayVisualTransitionEventArgs>";
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::ApplicationModel::Overlay::OverlayVisualTransitionEventArgs*> __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs_t;
#define __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs ABI::Windows::Foundation::__FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs_t
/* Foundation */ } /* Windows */ } /* ABI */ }

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs_USE */

#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Deferral;
        } /* Foundation */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IDeferral;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIDeferral ABI::Windows::Foundation::IDeferral

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IAsyncAction;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIAsyncAction ABI::Windows::Foundation::IAsyncAction

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Uri;
        } /* Foundation */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IUriRuntimeClass;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIUriRuntimeClass ABI::Windows::Foundation::IUriRuntimeClass

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                typedef enum OverlayCommandSource : int OverlayCommandSource;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                typedef enum OverlayTransitionAnimation : int OverlayTransitionAnimation;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                typedef enum OverlayVisualState : int OverlayVisualState;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                class OverlayApp;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                class OverlayAppOptions;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                class OverlayCommand;
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

/*
 *
 * Struct Windows.ApplicationModel.Overlay.OverlayCommandSource
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                enum OverlayCommandSource : int
                {
                    OverlayCommandSource_Keyboard = 0,
                    OverlayCommandSource_Gamepad = 1,
                    OverlayCommandSource_Programmatic = 2,
                    OverlayCommandSource_Pointer = 3,
                };
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Windows.ApplicationModel.Overlay.OverlayTransitionAnimation
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                enum OverlayTransitionAnimation : int
                {
                    OverlayTransitionAnimation_Disabled = 0,
                    OverlayTransitionAnimation_PlatformAuto = 1,
                    OverlayTransitionAnimation_Fade = 2,
                    OverlayTransitionAnimation_SlideLeft = 3,
                    OverlayTransitionAnimation_SlideRight = 4,
                };
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Windows.ApplicationModel.Overlay.OverlayVisualState
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                enum OverlayVisualState : int
                {
                    OverlayVisualState_Hidden = 0,
                    OverlayVisualState_Persistent = 1,
                    OverlayVisualState_Interactive = 2,
                };
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayActivatedEventArgs
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayActivatedEventArgs[] = L"Windows.ApplicationModel.Overlay.IOverlayActivatedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                MIDL_INTERFACE("277092d8-617c-50ba-9e57-6dc25078beb0")
                IOverlayActivatedEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Command(
                        ABI::Windows::ApplicationModel::Overlay::IOverlayCommand** value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IOverlayActivatedEventArgs = __uuidof(IOverlayActivatedEventArgs);
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayApp
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayApp
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayApp[] = L"Windows.ApplicationModel.Overlay.IOverlayApp";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                MIDL_INTERFACE("0410c228-3813-54fc-b402-88520526d1f5")
                IOverlayApp : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE StartAsync(
                        ABI::Windows::Foundation::IAsyncAction** operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DisconnectAsync(
                        ABI::Windows::Foundation::IAsyncAction** operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_VisualState(
                        ABI::Windows::ApplicationModel::Overlay::OverlayVisualState* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_VisualStateChanged(
                        __FIEventHandler_1_IInspectable* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_VisualStateChanged(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestInteractiveAsync(
                        ABI::Windows::ApplicationModel::Overlay::IOverlayCommand* command,
                        ABI::Windows::Foundation::IAsyncAction** operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ExitInteractiveAsync(
                        ABI::Windows::Foundation::IAsyncAction** operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPersistentModeEnabled(
                        boolean enabled
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetUnreadNotificationCount(
                        UINT32 count
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetHasActiveNotification(
                        boolean hasActive
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_Activated(
                        __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_Activated(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_VisualTransition(
                        __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_VisualTransition(
                        EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE add_Disconnected(
                        __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs* handler,
                        EventRegistrationToken* token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_Disconnected(
                        EventRegistrationToken token
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IOverlayApp = __uuidof(IOverlayApp);
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayAppOptions
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayAppOptions
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayAppOptions[] = L"Windows.ApplicationModel.Overlay.IOverlayAppOptions";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                MIDL_INTERFACE("9e0dd89a-0f2a-5cfd-805d-dbb13164c146")
                IOverlayAppOptions : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_CustomTransitionAnimations(
                        boolean* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE put_CustomTransitionAnimations(
                        boolean value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IOverlayAppOptions = __uuidof(IOverlayAppOptions);
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayAppStatics
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayApp
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayAppStatics[] = L"Windows.ApplicationModel.Overlay.IOverlayAppStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                MIDL_INTERFACE("2c112604-c435-53d0-9be6-6431e39eb26c")
                IOverlayAppStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        INT64 hwnd,
                        ABI::Windows::ApplicationModel::Overlay::IOverlayApp** result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Create2(
                        INT64 hwnd,
                        ABI::Windows::ApplicationModel::Overlay::IOverlayAppOptions* options,
                        ABI::Windows::ApplicationModel::Overlay::IOverlayApp** result
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IOverlayAppStatics = __uuidof(IOverlayAppStatics);
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayCommand
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayCommand
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayCommand[] = L"Windows.ApplicationModel.Overlay.IOverlayCommand";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                MIDL_INTERFACE("dde596f8-6093-5029-8cbc-06b046d328dc")
                IOverlayCommand : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_Source(
                        ABI::Windows::ApplicationModel::Overlay::OverlayCommandSource* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Uri(
                        ABI::Windows::Foundation::IUriRuntimeClass** value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IOverlayCommand = __uuidof(IOverlayCommand);
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayCommandFactory
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayCommand
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayCommandFactory[] = L"Windows.ApplicationModel.Overlay.IOverlayCommandFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                MIDL_INTERFACE("10210bb2-4755-520d-802b-7490c260f802")
                IOverlayCommandFactory : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                        ABI::Windows::ApplicationModel::Overlay::OverlayCommandSource source,
                        ABI::Windows::Foundation::IUriRuntimeClass* uri,
                        ABI::Windows::ApplicationModel::Overlay::IOverlayCommand** value
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IOverlayCommandFactory = __uuidof(IOverlayCommandFactory);
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayDisconnectedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayDisconnectedEventArgs
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayDisconnectedEventArgs[] = L"Windows.ApplicationModel.Overlay.IOverlayDisconnectedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                MIDL_INTERFACE("9573e2be-6692-513e-9ed4-71642a182d42")
                IOverlayDisconnectedEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        ABI::Windows::Foundation::IDeferral** result
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IOverlayDisconnectedEventArgs = __uuidof(IOverlayDisconnectedEventArgs);
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayVisualTransitionEventArgs
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayVisualTransitionEventArgs
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayVisualTransitionEventArgs[] = L"Windows.ApplicationModel.Overlay.IOverlayVisualTransitionEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Overlay {
                MIDL_INTERFACE("0cc0e9dd-b088-5f81-a02b-c925259a464d")
                IOverlayVisualTransitionEventArgs : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE get_NewState(
                        ABI::Windows::ApplicationModel::Overlay::OverlayVisualState* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Command(
                        ABI::Windows::ApplicationModel::Overlay::IOverlayCommand** value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_TransitionAnimation(
                        ABI::Windows::ApplicationModel::Overlay::OverlayTransitionAnimation* value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        ABI::Windows::Foundation::IDeferral** result
                        ) = 0;
                };

                MIDL_CONST_ID IID& IID_IOverlayVisualTransitionEventArgs = __uuidof(IOverlayVisualTransitionEventArgs);
            } /* Overlay */
        } /* ApplicationModel */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.ApplicationModel.Overlay.OverlayActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Overlay.IOverlayActivatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Overlay_OverlayActivatedEventArgs[] = L"Windows.ApplicationModel.Overlay.OverlayActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.ApplicationModel.Overlay.OverlayApp
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Overlay.IOverlayAppStatics interface starting with version 1.0 of the Windows.ApplicationModel.Overlay.OverlayContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Overlay.IOverlayApp ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayApp_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayApp_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Overlay_OverlayApp[] = L"Windows.ApplicationModel.Overlay.OverlayApp";
#endif
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.ApplicationModel.Overlay.OverlayAppOptions
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.ApplicationModel.Overlay.OverlayContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Overlay.IOverlayAppOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayAppOptions_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayAppOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Overlay_OverlayAppOptions[] = L"Windows.ApplicationModel.Overlay.OverlayAppOptions";
#endif
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.ApplicationModel.Overlay.OverlayCommand
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Overlay.IOverlayCommandFactory interface starting with version 1.0 of the Windows.ApplicationModel.Overlay.OverlayContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Overlay.IOverlayCommand ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayCommand_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayCommand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Overlay_OverlayCommand[] = L"Windows.ApplicationModel.Overlay.OverlayCommand";
#endif
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.ApplicationModel.Overlay.OverlayDisconnectedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Overlay.IOverlayDisconnectedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayDisconnectedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayDisconnectedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Overlay_OverlayDisconnectedEventArgs[] = L"Windows.ApplicationModel.Overlay.OverlayDisconnectedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.ApplicationModel.Overlay.OverlayVisualTransitionEventArgs
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Overlay.IOverlayVisualTransitionEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayVisualTransitionEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayVisualTransitionEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Overlay_OverlayVisualTransitionEventArgs[] = L"Windows.ApplicationModel.Overlay.OverlayVisualTransitionEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp;

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions;

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand;

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;

typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIEventHandler_1_IInspectable* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIEventHandler_1_IInspectable* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIEventHandler_1_IInspectable* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FIEventHandler_1_IInspectable* This,
        IInspectable* sender,
        IInspectable* args);

    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;

interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIEventHandler_1_IInspectable_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIEventHandler_1_IInspectable_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIEventHandler_1_IInspectable_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIEventHandler_1_IInspectable_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__

#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs;

typedef struct __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs* This,
        IInspectable* sender,
        __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs* args);

    END_INTERFACE
} __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgsVtbl;

interface __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs_INTERFACE_DEFINED__
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs;

typedef struct __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs* This,
        IInspectable* sender,
        __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs* args);

    END_INTERFACE
} __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgsVtbl;

interface __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs_INTERFACE_DEFINED__
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs;

typedef struct __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs* This,
        IInspectable* sender,
        __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs* args);

    END_INTERFACE
} __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgsVtbl;

interface __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs_INTERFACE_DEFINED__
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

typedef enum __x_ABI_CWindows_CApplicationModel_COverlay_COverlayCommandSource __x_ABI_CWindows_CApplicationModel_COverlay_COverlayCommandSource;

typedef enum __x_ABI_CWindows_CApplicationModel_COverlay_COverlayTransitionAnimation __x_ABI_CWindows_CApplicationModel_COverlay_COverlayTransitionAnimation;

typedef enum __x_ABI_CWindows_CApplicationModel_COverlay_COverlayVisualState __x_ABI_CWindows_CApplicationModel_COverlay_COverlayVisualState;

/*
 *
 * Struct Windows.ApplicationModel.Overlay.OverlayCommandSource
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
enum __x_ABI_CWindows_CApplicationModel_COverlay_COverlayCommandSource
{
    OverlayCommandSource_Keyboard = 0,
    OverlayCommandSource_Gamepad = 1,
    OverlayCommandSource_Programmatic = 2,
    OverlayCommandSource_Pointer = 3,
};
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Windows.ApplicationModel.Overlay.OverlayTransitionAnimation
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
enum __x_ABI_CWindows_CApplicationModel_COverlay_COverlayTransitionAnimation
{
    OverlayTransitionAnimation_Disabled = 0,
    OverlayTransitionAnimation_PlatformAuto = 1,
    OverlayTransitionAnimation_Fade = 2,
    OverlayTransitionAnimation_SlideLeft = 3,
    OverlayTransitionAnimation_SlideRight = 4,
};
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Struct Windows.ApplicationModel.Overlay.OverlayVisualState
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
enum __x_ABI_CWindows_CApplicationModel_COverlay_COverlayVisualState
{
    OverlayVisualState_Hidden = 0,
    OverlayVisualState_Persistent = 1,
    OverlayVisualState_Interactive = 2,
};
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayActivatedEventArgs
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayActivatedEventArgs[] = L"Windows.ApplicationModel.Overlay.IOverlayActivatedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Command)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs* This,
        __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand** value);

    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_get_Command(This, value) \
    ((This)->lpVtbl->get_Command(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayActivatedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayApp
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayApp
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayApp[] = L"Windows.ApplicationModel.Overlay.IOverlayApp";
typedef struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* StartAsync)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** operation);
    HRESULT (STDMETHODCALLTYPE* DisconnectAsync)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** operation);
    HRESULT (STDMETHODCALLTYPE* get_VisualState)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        enum __x_ABI_CWindows_CApplicationModel_COverlay_COverlayVisualState* value);
    HRESULT (STDMETHODCALLTYPE* add_VisualStateChanged)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        __FIEventHandler_1_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_VisualStateChanged)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* RequestInteractiveAsync)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand* command,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** operation);
    HRESULT (STDMETHODCALLTYPE* ExitInteractiveAsync)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        __x_ABI_CWindows_CFoundation_CIAsyncAction** operation);
    HRESULT (STDMETHODCALLTYPE* SetPersistentModeEnabled)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        boolean enabled);
    HRESULT (STDMETHODCALLTYPE* SetUnreadNotificationCount)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        UINT32 count);
    HRESULT (STDMETHODCALLTYPE* SetHasActiveNotification)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        boolean hasActive);
    HRESULT (STDMETHODCALLTYPE* add_Activated)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayActivatedEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_Activated)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_VisualTransition)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayVisualTransitionEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_VisualTransition)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* add_Disconnected)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        __FIEventHandler_1_Windows__CApplicationModel__COverlay__COverlayDisconnectedEventArgs* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_Disconnected)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp* This,
        EventRegistrationToken token);

    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppVtbl;

interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_StartAsync(This, operation) \
    ((This)->lpVtbl->StartAsync(This, operation))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_DisconnectAsync(This, operation) \
    ((This)->lpVtbl->DisconnectAsync(This, operation))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_get_VisualState(This, value) \
    ((This)->lpVtbl->get_VisualState(This, value))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_add_VisualStateChanged(This, handler, token) \
    ((This)->lpVtbl->add_VisualStateChanged(This, handler, token))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_remove_VisualStateChanged(This, token) \
    ((This)->lpVtbl->remove_VisualStateChanged(This, token))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_RequestInteractiveAsync(This, command, operation) \
    ((This)->lpVtbl->RequestInteractiveAsync(This, command, operation))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_ExitInteractiveAsync(This, operation) \
    ((This)->lpVtbl->ExitInteractiveAsync(This, operation))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_SetPersistentModeEnabled(This, enabled) \
    ((This)->lpVtbl->SetPersistentModeEnabled(This, enabled))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_SetUnreadNotificationCount(This, count) \
    ((This)->lpVtbl->SetUnreadNotificationCount(This, count))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_SetHasActiveNotification(This, hasActive) \
    ((This)->lpVtbl->SetHasActiveNotification(This, hasActive))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_add_Activated(This, handler, token) \
    ((This)->lpVtbl->add_Activated(This, handler, token))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_remove_Activated(This, token) \
    ((This)->lpVtbl->remove_Activated(This, token))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_add_VisualTransition(This, handler, token) \
    ((This)->lpVtbl->add_VisualTransition(This, handler, token))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_remove_VisualTransition(This, token) \
    ((This)->lpVtbl->remove_VisualTransition(This, token))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_add_Disconnected(This, handler, token) \
    ((This)->lpVtbl->add_Disconnected(This, handler, token))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_remove_Disconnected(This, token) \
    ((This)->lpVtbl->remove_Disconnected(This, token))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayAppOptions
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayAppOptions
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayAppOptions[] = L"Windows.ApplicationModel.Overlay.IOverlayAppOptions";
typedef struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptionsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_CustomTransitionAnimations)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_CustomTransitionAnimations)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions* This,
        boolean value);

    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptionsVtbl;

interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptionsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_get_CustomTransitionAnimations(This, value) \
    ((This)->lpVtbl->get_CustomTransitionAnimations(This, value))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_put_CustomTransitionAnimations(This, value) \
    ((This)->lpVtbl->put_CustomTransitionAnimations(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayAppStatics
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayApp
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayAppStatics[] = L"Windows.ApplicationModel.Overlay.IOverlayAppStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics* This,
        INT64 hwnd,
        __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp** result);
    HRESULT (STDMETHODCALLTYPE* Create2)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics* This,
        INT64 hwnd,
        __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppOptions* options,
        __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayApp** result);

    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_Create(This, hwnd, result) \
    ((This)->lpVtbl->Create(This, hwnd, result))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_Create2(This, hwnd, options, result) \
    ((This)->lpVtbl->Create2(This, hwnd, options, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayAppStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayCommand
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayCommand
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayCommand[] = L"Windows.ApplicationModel.Overlay.IOverlayCommand";
typedef struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Source)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand* This,
        enum __x_ABI_CWindows_CApplicationModel_COverlay_COverlayCommandSource* value);
    HRESULT (STDMETHODCALLTYPE* get_Uri)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand* This,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass** value);

    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandVtbl;

interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_get_Source(This, value) \
    ((This)->lpVtbl->get_Source(This, value))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_get_Uri(This, value) \
    ((This)->lpVtbl->get_Uri(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayCommandFactory
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayCommand
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayCommandFactory[] = L"Windows.ApplicationModel.Overlay.IOverlayCommandFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateInstance)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory* This,
        enum __x_ABI_CWindows_CApplicationModel_COverlay_COverlayCommandSource source,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* uri,
        __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand** value);

    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_CreateInstance(This, source, uri, value) \
    ((This)->lpVtbl->CreateInstance(This, source, uri, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommandFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayDisconnectedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayDisconnectedEventArgs
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayDisconnectedEventArgs[] = L"Windows.ApplicationModel.Overlay.IOverlayDisconnectedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetDeferral)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs* This,
        __x_ABI_CWindows_CFoundation_CIDeferral** result);

    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_GetDeferral(This, result) \
    ((This)->lpVtbl->GetDeferral(This, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayDisconnectedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Interface Windows.ApplicationModel.Overlay.IOverlayVisualTransitionEventArgs
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Overlay.OverlayVisualTransitionEventArgs
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Overlay_IOverlayVisualTransitionEventArgs[] = L"Windows.ApplicationModel.Overlay.IOverlayVisualTransitionEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_NewState)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs* This,
        enum __x_ABI_CWindows_CApplicationModel_COverlay_COverlayVisualState* value);
    HRESULT (STDMETHODCALLTYPE* get_Command)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs* This,
        __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayCommand** value);
    HRESULT (STDMETHODCALLTYPE* get_TransitionAnimation)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs* This,
        enum __x_ABI_CWindows_CApplicationModel_COverlay_COverlayTransitionAnimation* value);
    HRESULT (STDMETHODCALLTYPE* GetDeferral)(__x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs* This,
        __x_ABI_CWindows_CFoundation_CIDeferral** result);

    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_get_NewState(This, value) \
    ((This)->lpVtbl->get_NewState(This, value))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_get_Command(This, value) \
    ((This)->lpVtbl->get_Command(This, value))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_get_TransitionAnimation(This, value) \
    ((This)->lpVtbl->get_TransitionAnimation(This, value))

#define __x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_GetDeferral(This, result) \
    ((This)->lpVtbl->GetDeferral(This, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_COverlay_CIOverlayVisualTransitionEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.ApplicationModel.Overlay.OverlayActivatedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Overlay.IOverlayActivatedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayActivatedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayActivatedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Overlay_OverlayActivatedEventArgs[] = L"Windows.ApplicationModel.Overlay.OverlayActivatedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.ApplicationModel.Overlay.OverlayApp
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Overlay.IOverlayAppStatics interface starting with version 1.0 of the Windows.ApplicationModel.Overlay.OverlayContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Overlay.IOverlayApp ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayApp_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayApp_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Overlay_OverlayApp[] = L"Windows.ApplicationModel.Overlay.OverlayApp";
#endif
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.ApplicationModel.Overlay.OverlayAppOptions
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.ApplicationModel.Overlay.OverlayContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Overlay.IOverlayAppOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayAppOptions_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayAppOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Overlay_OverlayAppOptions[] = L"Windows.ApplicationModel.Overlay.OverlayAppOptions";
#endif
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.ApplicationModel.Overlay.OverlayCommand
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Overlay.IOverlayCommandFactory interface starting with version 1.0 of the Windows.ApplicationModel.Overlay.OverlayContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Overlay.IOverlayCommand ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayCommand_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayCommand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Overlay_OverlayCommand[] = L"Windows.ApplicationModel.Overlay.OverlayCommand";
#endif
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.ApplicationModel.Overlay.OverlayDisconnectedEventArgs
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Overlay.IOverlayDisconnectedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayDisconnectedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayDisconnectedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Overlay_OverlayDisconnectedEventArgs[] = L"Windows.ApplicationModel.Overlay.OverlayDisconnectedEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

/*
 *
 * Class Windows.ApplicationModel.Overlay.OverlayVisualTransitionEventArgs
 *
 * Introduced to Windows.ApplicationModel.Overlay.OverlayContract in version 1.0
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Overlay.IOverlayVisualTransitionEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayVisualTransitionEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Overlay_OverlayVisualTransitionEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Overlay_OverlayVisualTransitionEventArgs[] = L"Windows.ApplicationModel.Overlay.OverlayVisualTransitionEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_OVERLAY_OVERLAYCONTRACT_VERSION >= 0x10000

#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eapplicationmodel2Eoverlay_p_h__

#endif // __windows2Eapplicationmodel2Eoverlay_h__
