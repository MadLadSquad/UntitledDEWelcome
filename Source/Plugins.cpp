#include "Plugins.hpp"

ude_welcome::Plugins::Plugins()
{

}

void ude_welcome::Plugins::begin()
{
    beginAutohandle();

}

void ude_welcome::Plugins::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

}

void ude_welcome::Plugins::end()
{
    endAutohandle();

}

ude_welcome::Plugins::~Plugins()
{

}

