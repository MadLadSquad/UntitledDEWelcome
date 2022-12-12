#include "Instance.hpp"

ude_welcome::Instance::Instance()
{
    initInfo.inlineComponents.push_back(&welcome);
}

void ude_welcome::Instance::begin()
{
    beginAutohandle();

}

void ude_welcome::Instance::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

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

void ude_welcome::Instance::next() noexcept
{
    page++;
}

