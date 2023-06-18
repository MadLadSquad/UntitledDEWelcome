#pragma once
#include <Framework.hpp>

namespace ude_welcome
{
    struct Application
    {
        UImGui::String iconName;
        UImGui::Texture icon;
        UImGui::FString name;
        UImGui::FString about;
    };

    class UIMGUI_PUBLIC_API Instance : public UImGui::Instance
    {
    public:
        Instance();
        virtual void begin() override;
        virtual void tick(float deltaTime) override;
        virtual void end() override;
        virtual ~Instance() override;

        virtual void onEventConfigureStyle(ImGuiStyle& style, ImGuiIO& io) override;
    private:
        UImGui::Texture madladsquad = UImGui::Texture("../Content/madladsquadlogo.png");
        UImGui::Texture flow = UImGui::Texture("../Content/ude-flow.png");

        Application softwareSuite[7] =
        {
            {
                .iconName = "../Content/untitled-text-editor.png",
                .name = "UntitledTextEditor",
                .about = "A cross-platform, minimal, yet highly customisable text editor"
            },
            {
                .iconName = "../Content/untitled-image-viewer.png",
                .name = "UntitledImageViewer",
                .about = "A cross-platform, minimal, yet highly customisable image viewer"
            },
            {
                .iconName = "../Content/untitled-calculator.png",
                .name = "UntitledCalculator",
                .about = "A cross-platform, minimal, yet highly customisable calculator"
            },
            {
                .iconName = "../Content/untitled-game-system-manager.png",
                .name = "UntitledGameSystemManager",
                .about = "A game system linux container manager application"
            },
            {
                .iconName = "../Content/untitled-ibus-handwriting.png",
                .name = "UntitledIBusHandwrite",
                .about = "A handwriting input method for IBus"
            },
            {
                .iconName = "../Content/untitled-terminal.png",
                .name = "UntitledTerminalEmulator",
                .about = "A cross-platform, minimal, yet highly customisable terminal emulator with graphical "
                         "acceleration"
            },
            {
                .iconName = "../Content/untitled-file-manager.png",
                .name = "UntitledFileManager",
                .about = "A cross-platform, minimal, yet highly customisable file manager"
            },
        };

        Application deSoftware[9] =
        {
            {
                .iconName = "../Content/ude-session-logout.png",
                .name = "UntitledDESessionLogout",
                .about = "A session logout prompt"
            },
            {
                .iconName = "../Content/ude-welcome.png",
                .name = "UntitledDEWelcome",
                .about = "An application for welcoming new user and for storing documentation.\n"
                         "The application you're currently using"
            },
            {
                .iconName = "../Content/ude-polkit.png",
                .name = "UntitledDEPolkitAgent",
                .about = "A polkit agent for the desktop environment"
            },
            {
                .iconName = "../Content/untitled-kbd.png",
                .name = "UntitledKBD",
                .about = "A keyboard layout conversion application"
            },
            {
                .iconName = "../Content/ude-package-manager.png",
                .name = "UntitledPackageManager",
                .about = "A package manager for plugins for the UntitledDesktopEnvironment"
            },
            {
                .iconName = "../Content/example-icon.png",
                .name = "UntitledDESessionManager",
                .about = "A session manager for the UntitledDesktopEnvironment"
            },
            {
                .iconName = "../Content/ude-power-manager.png",
                .name = "UntitledDEPowerManager",
                .about = "A power manager for the UntitledDesktopEnvironment"
            },
            {
                .iconName = "../Content/example-icon.png",
                .name = "UntitledDEWallpaperManager",
                .about = "A wallpaper manager for the UntitledDesktopEnvironment"
            },
            {
                .iconName = "../Content/ude-settings.png",
                .name = "UntitledDESettings",
                .about = "A settings and configuration manager for the UntitledDesktopEnvironment"
            },
        };

        Application flowSoftware[2] = {
            {
                .iconName = "../Content/udf-application-launcher.png",
                .name = "UDFApplicationLauncher",
                .about = "An application launcher for the UntitledDesktop Flow"
            },
            {
                .iconName = "../Content/udf-panel.png",
                .name = "UDFPanel",
                .about = "A panel for the UntitledDesktop Flow"
            },
        };
    };
}

