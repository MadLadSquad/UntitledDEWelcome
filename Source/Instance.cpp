#include "Instance.hpp"

ude_welcome::Instance::Instance() noexcept
{
    //initInfo.inlineComponents.push_back(&welcome);
    initInfo = { UIMGUI_INIT_INFO_DEFAULT_DIRS, };
}

void ude_welcome::Instance::begin() noexcept
{
    beginAutohandle();
    madladsquad.init(UIMGUI_CONTENT_DIR"madladsquadlogo.png");
    madladsquad.load();

    flow.init(UIMGUI_CONTENT_DIR"ude-flow.png");
    flow.load();
    
    for (auto& a : softwareSuite)
    {
        a.icon.init(a.iconName);
        a.icon.load();
    }

    for (auto& a : deSoftware)
    {
        a.icon.init(a.iconName);
        a.icon.load();
    }

    for (auto& a : flowSoftware)
    {
        a.icon.init(a.iconName);
        a.icon.load();
    }
}

void ude_welcome::Instance::tick(const float deltaTime) noexcept
{
    tickAutohandle(deltaTime);

    if (ImGui::BeginTabBar("Test"))
    {
        if (ImGui::BeginTabItem("Welcome", static_cast<bool*>(nullptr)))
        {
            ImGui::TextWrapped("Welcome to the Untitled Desktop Environment!\n\nThe completely independent and "
                               "highly hackable open-source desktop environment for Linux and other systems based on "
                               "components by the freedesktop foundation.\nIt is minimal by default"
                               "but really hackable and allows users to control all features of their applications.");
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("About us", static_cast<bool*>(nullptr)))
        {
            ImGui::TextWrapped("The UntitledDesktopEnvironment is developed by MadLadSquad, a Bulgarian free "
                               "software collective. We're mostly volunteers that work on it in our free time."
                               "\n\nMore information, including getting involved, contributing and funding can be found"
                               "on our website at: https://madladsquad.com/");
            ImGui::Image(madladsquad.get(), { 96.0f, 96.0f });
            if (ImGui::IsItemHovered())
            {
                ImGui::BeginTooltip();
                ImGui::Text("MadLadSquad logo");
                ImGui::EndTooltip();
            }
            ImGui::SameLine();
            ImGui::Image(flow.get(), { 96.0f, 96.0f });
            if (ImGui::IsItemHovered())
            {
                ImGui::BeginTooltip();
                ImGui::Text("Untitled Desktop Flow logo");
                ImGui::EndTooltip();
            }

            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("Software", static_cast<bool*>(nullptr)))
        {
            int gridItems = static_cast<int>(ImGui::GetContentRegionAvail().x / 96.0f);
            size_t i = 0;
            ImGui::Text("UntitledApplicationSuite:\n");
            if (ImGui::BeginTable("UntitledApplicationSuite table", gridItems))
            {
                ImGui::TableNextColumn();

                for (auto& a : softwareSuite)
                {
                    ImGui::PushID(static_cast<int>(i));

                    ImGui::Image(a.icon.get(), { 96.0f, 96.0f });
                    if (ImGui::IsItemHovered())
                    {
                        ImGui::BeginTooltip();
                        ImGui::Text("%s", a.about.c_str());
                        ImGui::EndTooltip();
                    }
                    ImGui::TextWrapped("%s", a.name.c_str());
                    ImGui::TableNextColumn();

                    ImGui::PopID();
                    i++;
                }
                ImGui::EndTable();
            }
            ImGui::Text("UntitledDesktop applications:\n");
            if (ImGui::BeginTable("UDE Application table", gridItems))
            {
                ImGui::TableNextColumn();
                for (auto& a : deSoftware)
                {
                    ImGui::PushID(static_cast<int>(i));
                    ImGui::Image(a.icon.get(), { 96.0f, 96.0f });
                    if (ImGui::IsItemHovered())
                    {
                        ImGui::BeginTooltip();
                        ImGui::Text("%s", a.about.c_str());
                        ImGui::EndTooltip();
                    }
                    ImGui::TextWrapped("%s", a.name.c_str());
                    ImGui::TableNextColumn();

                    ImGui::PopID();
                    i++;
                }
                ImGui::EndTable();
            }

            ImGui::Text("UntitledDesktopFlow:\n");
            if (ImGui::BeginTable("UntitledDesktop Flow applications", gridItems))
            {
                ImGui::TableNextColumn();
                for (auto& a : flowSoftware)
                {
                    ImGui::PushID(static_cast<int>(i));
                    ImGui::Image(a.icon.get(), { 96.0f, 96.0f });
                    if (ImGui::IsItemHovered())
                    {
                        ImGui::BeginTooltip();
                        ImGui::Text("%s", a.about.c_str());
                        ImGui::EndTooltip();
                    }
                    ImGui::TextWrapped("%s", a.name.c_str());
                    ImGui::TableNextColumn();

                    ImGui::PopID();
                    i++;
                }
                ImGui::EndTable();
            }
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("Plugins", static_cast<bool*>(nullptr)))
        {
            ImGui::TextWrapped("A many applications have support for third party plugins."
                               "Installing plugins is easy due to our convenient package manager: the UntitledPackageManager.");
            ImGui::TextWrapped("Commands can be installed through the \"upkg\" CLI utility, or the GUI UPKG Store");
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("Documentation", static_cast<bool*>(nullptr)))
        {
            ImGui::TextWrapped("This tab stores help information and documentation about our applications.");
            ImGui::EndTabItem();
        }
        ImGui::EndTabBar();
    }
    if (ImGui::Button("Close"))
        UImGui::Instance::shutdown();
}

void ude_welcome::Instance::end() noexcept
{
    endAutohandle();

}

void ude_welcome::Instance::onEventConfigureStyle(ImGuiStyle& style, ImGuiIO& io) noexcept
{

}
