#include "Wizard.hpp"
#include <iostream>

Wizard::Wizard()
{
    std::cout<< "Wizard ctor" <<std::endl;
}

void Wizard::attack()
{
    std::cout<< "Wizard casts a fireball" << std::endl;
}
