#include "Ninja.hpp"
#include <iostream>

Ninja::Ninja()
{
    std::cout << "Ninja ctor" << std::endl;
}

void Ninja::attack()
{
    std::cout<< "Ninja attack with a katana"<<std::endl;
}