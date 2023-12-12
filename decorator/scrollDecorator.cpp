#include "scrollDecorator.hpp"
#include <iostream>

ScrollDecorator::ScrollDecorator(View& view): Decorator{view}
{
}

void ScrollDecorator::draw()
{
    Decorator::draw();
    scrollTo();
}

void ScrollDecorator::scrollTo()
{
    std::cout << "scroll to ..." <<std::endl;
}
