#include "Instance.hpp"

ude_welcome::Instance::Instance()
{
    //initInfo.inlineComponents.push_back(&welcome);
}

void ude_welcome::Instance::begin()
{
    beginAutohandle();
    madladsquad.loadImGui();
    flow.loadImGui();
    for (auto& a : softwareSuite)
    {
        a.icon.init(a.iconName);
        a.icon.loadImGui();
    }

    for (auto& a : deSoftware)
    {
        a.icon.init(a.iconName);
        a.icon.loadImGui();
    }

    for (auto& a : flowSoftware)
    {
        a.icon.init(a.iconName);
        a.icon.loadImGui();
    }
}

void ude_welcome::Instance::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

    if (ImGui::BeginTabBar("Test"))
    {
        if (ImGui::BeginTabItem("Welcome", (bool*)nullptr))
        {
            ImGui::TextWrapped("Welcome to the Untitled Desktop Environment!\n\nThe completely independent and "
                               "highly hackable open-source desktop environment for Linux and other systems based on "
                               "components by the freedesktop foundation.\nIt is minimal by default"
                               "but really hackable and allows users to control all features of their applications.");
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("About us", (bool*)nullptr))
        {
            ImGui::TextWrapped("The UntitledDesktopEnvironment is developed by MadLadSquad, a Bulgarian free "
                               "software collective. We're mostly volunteers that work on it in our free time."
                               "\n\nMore information, including getting involved, contributing and funding can be found"
                               "on our website at: https://madladsquad.com/");
            ImGui::Image((void*)(intptr_t)madladsquad.get(), { 96.0f, 96.0f });
            if (ImGui::IsItemHovered())
            {
                ImGui::BeginTooltip();
                ImGui::Text("MadLadSquad logo");
                ImGui::EndTooltip();
            }
            ImGui::SameLine();
            ImGui::Image((void*)(intptr_t)flow.get(), { 96.0f, 96.0f });
            if (ImGui::IsItemHovered())
            {
                ImGui::BeginTooltip();
                ImGui::Text("Untitled Desktop Flow logo");
                ImGui::EndTooltip();
            }

            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("Software", (bool*)nullptr))
        {
            int gridItems = static_cast<int>(ImGui::GetContentRegionAvail().x / 96.0f);
            size_t i = 0;
            ImGui::Text("UntitledApplicationSuite:\n");
            if (ImGui::BeginTable("UntitledApplicationSuite table", gridItems))
            {
                ImGui::TableNextColumn();

                for (auto& a : softwareSuite)
                {
                    ImGui::PushID(i);

                    ImGui::Image((void*)(intptr_t)a.icon.get(), { 96.0f, 96.0f });
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
                    ImGui::PushID(i);
                    ImGui::Image((void*)(intptr_t)a.icon.get(), { 96.0f, 96.0f });
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
                    ImGui::PushID(i);
                    ImGui::Image((void*)(intptr_t)a.icon.get(), { 96.0f, 96.0f });
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
        if (ImGui::BeginTabItem("Plugins", (bool*)nullptr))
        {
            ImGui::TextWrapped("A many applications have support for third party plugins."
                               "Installing plugins is easy due to our convenient package manager: the UntitledPackageManager.");
            ImGui::TextWrapped("Commands can be installed through the \"upkg\" CLI utility, or the GUI UPKG Store");
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("Documentation", (bool*)nullptr))
        {
            ImGui::TextWrapped("This tab stores help information and documentation about our applications.");
            ImGui::EndTabItem();
        }
        ImGui::EndTabBar();
    }
    if (ImGui::Button("Close"))
        UImGui::Instance::shutdown();
}

void ude_welcome::Instance::end()
{
    endAutohandle();

}

ude_welcome::Instance::~Instance()
{

}

void ude_welcome::Instance::onEventConfigureStyle(ImGuiStyle& style, ImGuiIO& io)
{

}