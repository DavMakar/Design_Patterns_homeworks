#include <iostream>
#include "textView.hpp"
#include "borderDecorator.hpp"
#include "scrollDecorator.hpp"

int main(){
    TextView tw1;
    tw1.draw();
    std::cout<<std::endl;
    ScrollDecorator tw1Scroll(tw1);
    tw1Scroll.draw();
    std::cout<<std::endl;
    BorderDecorator tw1Border(tw1Scroll);
    tw1Border.draw();

    std::cout<<std::endl;
    ScrollDecorator allScoll(tw1Border);
    allScoll.draw();
}