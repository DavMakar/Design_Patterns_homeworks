#pragma once
#include "decorator.hpp"

class BorderDecorator: public Decorator{
public:
    BorderDecorator(View& view);
    void draw();
private:   
    void drawBorder();
};