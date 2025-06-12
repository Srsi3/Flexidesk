#pragma once
#include "MainWindow.g.h"

namespace winrt::WidgetHost::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();
    };
}
