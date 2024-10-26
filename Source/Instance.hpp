#pragma once
#include <Framework.hpp>
#include <Generated/Config.hpp>

namespace ude_welcome
{
    struct Application
    {
        UImGui::String iconName;
        UImGui::Texture icon;
        UImGui::FString name;
        UImGui::FString about;
    };

    class UIMGUI_PUBLIC_API Instance final : public UImGui::Instance
    {
    public:
        Instance() noexcept;
        virtual void begin() noexcept override;
        virtual void tick(float deltaTime) noexcept override;
        virtual void end() noexcept override;
        virtual ~Instance() noexcept override = default;

        virtual void onEventConfigureStyle(ImGuiStyle& style, ImGuiIO& io) noexcept override;
    private:
        UImGui::Texture madladsquad{};
        UImGui::Texture flow{};

        Application softwareSuite[7] =
        {
            {
                .iconName = UIMGUI_CONTENT_DIR"untitled-text-editor.png",
                .name = "UntitledTextEditor",
                .about = "A cross-platform, minimal, yet highly customisable text editor"
            },
            {
                .iconName = UIMGUI_CONTENT_DIR"untitled-image-viewer.png",
                .name = "UntitledImageViewer",
                .about = "A cross-platform, minimal, yet highly customisable image viewer"
            },
            {
                .iconName = UIMGUI_CONTENT_DIR"untitled-calculator.png",
                .name = "UntitledCalculator",
                .about = "A cross-platform, minimal, yet highly customisable calculator"
            },
            {
                .iconName = UIMGUI_CONTENT_DIR"untitled-game-system-manager.png",
                .name = "UntitledGameSystemManager",
                .about = "A game system linux container manager application"
            },
            {
                .iconName = UIMGUI_CONTENT_DIR"untitled-ibus-handwriting.png",
                .name = "UntitledIBusHandwrite",
                .about = "A handwriting input method for IBus"
            },
            {
                .iconName = UIMGUI_CONTENT_DIR"untitled-terminal.png",
                .name = "UntitledTerminalEmulator",
                .about = "A cross-platform, minimal, yet highly customisable terminal emulator with graphical "
                         "acceleration"
            },
            {
                .iconName = UIMGUI_CONTENT_DIR"untitled-file-manager.png",
                .name = "UntitledFileManager",
                .about = "A cross-platform, minimal, yet highly customisable file manager"
            },
        };

        Application deSoftware[9] =
        {
            {
                .iconName = UIMGUI_CONTENT_DIR"ude-session-logout.png",
                .name = "UntitledDESessionLogout",
                .about = "A session logout prompt"
            },
            {
                .iconName = UIMGUI_CONTENT_DIR"ude-welcome.png",
                .name = "UntitledDEWelcome",
                .about = "An application for welcoming new user and for storing documentation.\n"
                         "The application you're currently using"
            },
            {
                .iconName = UIMGUI_CONTENT_DIR"ude-polkit.png",
                .name = "UntitledDEPolkitAgent",
                .about = "A polkit agent for the desktop environment"
            },
            {
                .iconName = UIMGUI_CONTENT_DIR"untitled-kbd.png",
                .name = "UntitledKBD",
                .about = "A keyboard layout conversion application"
            },
            {
                .iconName = UIMGUI_CONTENT_DIR"ude-package-manager.png",
                .name = "UntitledPackageManager",
                .about = "A package manager for plugins for the UntitledDesktopEnvironment"
            },
            {
                .iconName = UIMGUI_CONTENT_DIR"example-icon.png",
                .name = "UntitledDESessionManager",
                .about = "A session manager for the UntitledDesktopEnvironment"
            },
            {
                .iconName = UIMGUI_CONTENT_DIR"ude-power-manager.png",
                .name = "UntitledDEPowerManager",
                .about = "A power manager for the UntitledDesktopEnvironment"
            },
            {
                .iconName = UIMGUI_CONTENT_DIR"example-icon.png",
                .name = "UntitledDEWallpaperManager",
                .about = "A wallpaper manager for the UntitledDesktopEnvironment"
            },
            {
                .iconName = UIMGUI_CONTENT_DIR"ude-settings.png",
                .name = "UntitledDESettings",
                .about = "A settings and configuration manager for the UntitledDesktopEnvironment"
            },
        };

        Application flowSoftware[2] = {
            {
                .iconName = UIMGUI_CONTENT_DIR"udf-application-launcher.png",
                .name = "UDFApplicationLauncher",
                .about = "An application launcher for the UntitledDesktop Flow"
            },
            {
                .iconName = UIMGUI_CONTENT_DIR"udf-panel.png",
                .name = "UDFPanel",
                .about = "A panel for the UntitledDesktop Flow"
            },
        };
    };
}

