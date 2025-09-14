// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_UserActivities_Core_2_H
#define WINRT_Windows_ApplicationModel_UserActivities_Core_2_H
#include "winrt/impl/windows.applicationmodel.useractivities.1.h"
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.applicationmodel.useractivities.core.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities::Core
{
    struct CoreUserActivityManager
    {
        CoreUserActivityManager() = delete;
        static auto CreateUserActivitySessionInBackground(winrt::Windows::ApplicationModel::UserActivities::UserActivity const& activity);
        static auto DeleteUserActivitySessionsInTimeRangeAsync(winrt::Windows::ApplicationModel::UserActivities::UserActivityChannel const& channel, winrt::Windows::Foundation::DateTime const& startTime, winrt::Windows::Foundation::DateTime const& endTime);
    };
}
#endif
