#include "Software.hpp"

ude_welcome::Software::Software()
{

}

void ude_welcome::Software::begin()
{
    beginAutohandle();

}

void ude_welcome::Software::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

}

void ude_welcome::Software::end()
{
    endAutohandle();

}

ude_welcome::Software::~Software()
{

}

