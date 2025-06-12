# Flexidesk# DeskCraft — Milestone 1: Overlay Host MVP

This is a native C++/WinRT + WinUI 3 unpackaged desktop app that shows:
- a frameless, transparent window
- a semi-opaque “Drag me!” rectangle
- click-and-drag anywhere on that rectangle to move the window
- closing the app restores normal desktop behavior

## Prerequisites

- Windows 11 (SDK 10.0.22000.0+)
- [Windows App SDK 1.6](https://docs.microsoft.com/windows/apps/windows-app-sdk/)
- Visual Studio 2022 or VS Code with:
  - **C/C++** extension
  - **MSBuild Project Tools** extension
  - **WinUI 3 Project System** support (via Windows App SDK installer)

## Building & Running

```bash
git clone <your-repo>
cd <repo>
msbuild /m DeskCraft.sln /p:Configuration=Debug
# then launch from the output dir, e.g.
src\WidgetHost\bin\x64\Debug\net8.0-windows10.0.22000.0\App.exe
