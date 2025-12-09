// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Perception_Automation_Core_2_H
#define WINRT_Windows_Perception_Automation_Core_2_H
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.perception.automation.core.1.h"
WINRT_EXPORT namespace winrt::Windows::Perception::Automation::Core
{
    struct CorePerceptionAutomation
    {
        CorePerceptionAutomation() = delete;
        static auto SetActivationFactoryProvider(winrt::Windows::Foundation::IGetActivationFactory const& provider);
    };
}
#endif
