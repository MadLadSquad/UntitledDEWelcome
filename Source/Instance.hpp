#pragma once
#include <Framework.hpp>

namespace ude_welcome
{
    struct Application
    {
        UImGui::Texture* icon;
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
        UImGui::Texture flow;

        std::vector<Application> softwareSuite =
        {
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledTextEditor",
                .about = "A cross-platform, minimal, yet highly customisable text editor"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledImageViewer",
                .about = "A cross-platform, minimal, yet highly customisable image viewer"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledCalculator",
                .about = "A cross-platform, minimal, yet highly customisable calculator"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledLinuxGameManager",
                .about = "A game system linux container manager application"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledIBusHandwrite",
                .about = "A handwriting input method for IBus"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledTerminalEmulator",
                .about = "A cross-platform, minimal, yet highly customisable terminal emulator with graphical "
                         "acceleration"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledFileManager",
                .about = "A cross-platform, minimal, yet highly customisable file manager"
            },
        };

        std::vector<Application> deSoftware =
        {
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledDESessionLogout",
                .about = "A session logout prompt"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledDEWelcome",
                .about = "An application for welcoming new user and for storing documentation.\n"
                         "The application you're currently using"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledDEPolkitAgent",
                .about = "A polkit agent for the desktop environment"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledKBD",
                .about = "A keyboard layout conversion application"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledDesktopCompat",
                .about = "A cross-desktop multi-way compatibility adapter system"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledDEPluginPackageManager",
                .about = "A package manager for plugins for the UntitledDesktopEnvironment"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledDEThemeGenerator",
                .about = "A generator for UDE themes and helper theme maker application"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledDESessionManager",
                .about = "A session manager for the UntitledDesktopEnvironment"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledDEPowerManager",
                .about = "A power manager for the UntitledDesktopEnvironment"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledDEWallpaperManager",
                .about = "A wallpaper manager for the UntitledDesktopEnvironment"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UntitledDESettings",
                .about = "A settings and configuration manager for the UntitledDesktopEnvironment"
            },
        };

        std::vector<Application> flowSoftware = {
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UDFApplicationLauncher",
                .about = "An application launcher for the UntitledDesktop Flow"
            },
            {
                .icon = &madladsquad,//("../Content/madladsquadlogo.png"),
                .name = "UDFPanel",
                .about = "A panel for the UntitledDesktop Flow"
            },
        };
    };
}

