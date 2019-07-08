﻿#pragma once

#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Controls.h"
#include "winrt/Microsoft.UI.Xaml.Controls.h"

#include "TerminalPage.g.h"

namespace winrt::TerminalApp::implementation
{
    struct TerminalPage : TerminalPageT<TerminalPage>
    {
        TerminalPage();

        void OnNewTabButtonClick(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::SplitButtonClickEventArgs const& args);
    };
}

namespace winrt::TerminalApp::factory_implementation
{
    struct TerminalPage : TerminalPageT<TerminalPage, implementation::TerminalPage>
    {
    };
}
