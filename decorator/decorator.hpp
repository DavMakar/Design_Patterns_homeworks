#pragma once
#include "view.hpp"

class Decorator: public View{
public:
    Decorator(View& vi);
    virtual ~Decorator() = default;
    virtual void draw();
private:
    View& view_;
};