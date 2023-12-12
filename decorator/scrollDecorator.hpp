#pragma once
#include "decorator.hpp"

class ScrollDecorator:public Decorator{
public:   
    ScrollDecorator(View& vi);
    void draw() override;
private:
    void scrollTo();
};