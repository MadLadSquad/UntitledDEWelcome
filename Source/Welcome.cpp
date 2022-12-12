#include "Welcome.hpp"
#include "Instance.hpp"

ude_welcome::Welcome::Welcome()
{

}

void ude_welcome::Welcome::begin()
{
    beginAutohandle();

}

void ude_welcome::Welcome::tick(float deltaTime)
{
    tickAutohandle(deltaTime);
    ImGui::NewLine();
    ImGui::Text("Welcome to the Untitled Desktop Environment");

    ImGui::NewLine();

    ImGui::TextWrapped("The Untitled Desktop Environment, often shortened to UntitledDesktop or UDE, is a free, "
                       "libre and open source desktop environment. We designed it so that it has reasonable defaults, "
                       "but is powerful and highly extensible, to the point where you can modify any application to be "
                       "as minimal or as featureful as you want. Click the \"Next\" button to go to the next slide");

    if (ImGui::Button("Next"))
    {
        state = UImGui::UIMGUI_COMPONENT_STATE_PAUSED;
        UImGui::Instance::cast<ude_welcome::Instance>()->next();
    }
}

void ude_welcome::Welcome::end()
{
    endAutohandle();

}

ude_welcome::Welcome::~Welcome()
{

}

