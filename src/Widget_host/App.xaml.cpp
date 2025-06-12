#include "pch.h"
#include "App.xaml.h"
#include "MainWindow.xaml.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;

namespace winrt::WidgetHost::implementation
{
    App::App()
    {
        InitializeComponent();
    }

    void App::OnLaunched(LaunchActivatedEventArgs const& args)
    {
        // 1 Hz global timer (future widgets will subscribe to this)
        DispatcherTimer timer{};
        timer.Interval(std::chrono::seconds(1));
        timer.Tick([&](auto&&, auto&&) {
            // nothing yet – hooks for Milestone 2
        });
        timer.Start();

        // show our overlay window
        MainWindow window{};
        window.Activate();
    }
}
