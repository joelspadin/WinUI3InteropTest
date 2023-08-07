// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "winrt/Microsoft.UI.Xaml.h"
#include "winrt/Microsoft.UI.Xaml.Markup.h"
#include "winrt/Microsoft.UI.Xaml.Controls.Primitives.h"
#include "TestControl.g.h"

namespace winrt::TestComponent::implementation
{
    struct TestControl : TestControlT<TestControl>
    {
        TestControl();
    };
}

namespace winrt::TestComponent::factory_implementation
{
    struct TestControl : TestControlT<TestControl, implementation::TestControl>
    {
    };
}
