#include "decorator.hpp"

Decorator::Decorator(View &vi):view_(vi)
{
}

void Decorator::draw()
{
    view_.draw();
}
