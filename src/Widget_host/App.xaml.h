#pragma once
#include "App.g.h"

namespace winrt::WidgetHost::implementation
{
    struct App : AppT<App>
    {
        App();
        void OnLaunched(Microsoft::UI::Xaml::LaunchActivatedEventArgs const& args);
    };
}
