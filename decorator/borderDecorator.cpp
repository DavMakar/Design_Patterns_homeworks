#include "borderDecorator.hpp"
#include <iostream>

BorderDecorator::BorderDecorator(View &view):Decorator{view}
{   
}

void BorderDecorator::drawBorder()
{
    std::cout<< "added border"<<std::endl;
}

void BorderDecorator::draw()
{
    Decorator::draw();
    drawBorder();
}
