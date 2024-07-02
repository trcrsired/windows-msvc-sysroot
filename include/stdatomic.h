// Copyright (c) Microsoft Corporation.
#pragma once
#ifdef __cplusplus
#if __has_include(<__msvc_cxx_stdatomic.hpp>)
#include <__msvc_cxx_stdatomic.hpp>
#endif
#else
#include <vcruntime_c11_stdatomic.h>
#endif