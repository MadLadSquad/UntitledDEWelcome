#include "Instance.hpp"

ude_welcome::Instance::Instance()
{
    //initInfo.inlineComponents.push_back(&welcome);
}

void ude_welcome::Instance::begin()
{
    beginAutohandle();
    madladsquad.loadImGui();
    //for (auto& a : softwareSuite)
    //    a.icon.loadImGui();
    //for (auto& a : deSoftware)
    //    a.icon.loadImGui();
    //for (auto& a : flowSoftware)
    //    a.icon.loadImGui();
}

void ude_welcome::Instance::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

    ImGui::ShowDemoWindow((void*)nullptr);
    if (ImGui::BeginTabBar("Test"))
    {
        if (ImGui::BeginTabItem("Welcome", (bool*)nullptr))
        {
            ImGui::TextWrapped("Welcome to the Untitled Desktop Environment!\n\nThe completely independent and "
                               "highly hackable desktop environment for Linux and other systems based on "
                               "components by the freedesktop foundation.");
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("About us", (bool*)nullptr))
        {
            ImGui::TextWrapped("The UntitledDesktopEnvironment is developed by MadLadSquad, a Bulgarian free "
                               "software collective. These are our priorities:");
            ImGui::BulletText("User freedom - Replace any application, modify application features, etc");
            ImGui::BulletText("Cross-desktop compatibility - Adapter programs to merge QT and GTK based desktops "
                              "with our own");
            ImGui::BulletText("A fully community-centered approach to development - Everyone is a user");
            ImGui::BulletText("A great UX, no matter the user's experience - Because all users are valid");
            ImGui::BulletText("A great multilingual experience - Your human language matters");
            ImGui::BulletText("A great distribution experience - Have the latest version of applications "
                              "available within a day");
            ImGui::BulletText("A great theming experience - Full and easy customisation using cross-desktop "
                              "theming and format adapters");

            ImGui::Image((void*)(intptr_t)madladsquad.get(), { 50.0f, 50.0f });
            if (ImGui::IsItemHovered())
            {
                ImGui::BeginTooltip();
                ImGui::Text("MadLadSquad logo");
                ImGui::EndTooltip();
            }
            ImGui::SameLine();
            ImGui::Image((void*)(intptr_t)flow.get(), { 50.0f, 50.0f });

            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("Software", (bool*)nullptr))
        {
            int gridItems = static_cast<int>(ImGui::GetContentRegionAvail().x / 50);
            size_t i = 0;
            ImGui::Text("UntitledApplicationSuite");
            if (ImGui::BeginTable("UntitledApplicationSuite table", gridItems))
            {
                ImGui::NextColumn();

                for (auto& a : softwareSuite)
                {
                    ImGui::PushID(i);

                    std::cout << i << std::endl;

                    ImGui::Image((void*)(intptr_t)a.icon->get(), { 50.0f, 50.0f });
                    if (ImGui::IsItemHovered())
                    {
                        ImGui::BeginTooltip();
                        ImGui::Text("%s", a.about.c_str());
                        ImGui::EndTooltip();
                    }
                    ImGui::TextWrapped("%s", a.name.c_str());
                    ImGui::NextColumn();

                    ImGui::PopID();
                    i++;
                }
                ImGui::EndTable();
            }
            ImGui::Text("UntitledDesktop applications");
            if (ImGui::BeginTable("UDE Application table", gridItems))
            {
                ImGui::NextColumn();
                for (auto& a : softwareSuite)
                {
                    ImGui::PushID(i);

                    ImGui::Image((void*)(intptr_t)a.icon->get(), { 50.0f, 50.0f });
                    if (ImGui::IsItemHovered())
                    {
                        ImGui::BeginTooltip();
                        ImGui::Text("%s", a.about.c_str());
                        ImGui::EndTooltip();
                    }
                    ImGui::TextWrapped("%s", a.name.c_str());
                    ImGui::NextColumn();

                    ImGui::PopID();
                    i++;
                }
                ImGui::EndTable();
            }

            ImGui::Text("UntitledDesktopFlow");
            if (ImGui::BeginTable("UntitledDesktop Flow applications", gridItems))
            {
                ImGui::NextColumn();
                for (auto& a : softwareSuite)
                {
                    ImGui::PushID(i);

                    ImGui::Image((void*)(intptr_t)a.icon->get(), { 50.0f, 50.0f });
                    if (ImGui::IsItemHovered())
                    {
                        ImGui::BeginTooltip();
                        ImGui::Text("%s", a.about.c_str());
                        ImGui::EndTooltip();
                    }
                    ImGui::TextWrapped("%s", a.name.c_str());
                    ImGui::NextColumn();

                    ImGui::PopID();
                    i++;
                }
                ImGui::EndTable();
            }
            ImGui::EndTabItem();
        }
        if (ImGui::BeginTabItem("Plugins", (bool*)nullptr))
        {
            ImGui::EndTabItem();
        }
        ImGui::EndTabBar();
    }

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