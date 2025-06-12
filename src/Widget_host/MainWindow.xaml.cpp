#include "pch.h"
#include "MainWindow.xaml.h"

#include <winrt/Microsoft.UI.Xaml.Hosting.h>
#include <winrt/Microsoft.UI.Windowing.h>
#include <winrt/Windows.UI.h>
#include <winrt/WinRT.Interop.h>

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Windowing;
using namespace Windows::UI;
using namespace WinRT::Interop;

namespace winrt::WidgetHost::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();

        // grab the native HWND
        HWND hwnd = WindowNative::GetWindowHandle(*this);
        WindowId id = GetWindowIdFromWindow(hwnd);

        // fetch the AppWindow to customize titlebar
        AppWindow appWindow = AppWindow::GetFromWindowId(id);
        appWindow.TitleBar().ExtendsContentIntoTitleBar(true);
        appWindow.TitleBar().ButtonBackgroundColor(Colors::Transparent());
        appWindow.TitleBar().ButtonInactiveBackgroundColor(Colors::Transparent());

        // make our Border the draggable region
        SetTitleBar(DragRegion());
    }
}
