#include "NormalHouseBuilder.hpp"
#include <iostream>

NormalHouseBuilder::NormalHouseBuilder()
: normalHouse_{new House()}
{
}

void NormalHouseBuilder::reset(){
    delete normalHouse_;
    normalHouse_ = new House();
}

void NormalHouseBuilder::addWall()
{
    normalHouse_->setWall(true);
}

void NormalHouseBuilder::addDoor()
{
    normalHouse_->setDoor(true);
}

void NormalHouseBuilder::addRoof()
{
    normalHouse_->setRoof(true);
}

void NormalHouseBuilder::addPool()
{
    normalHouse_->setPool(false);
}

House* NormalHouseBuilder::getResult()
{
    std::cout<< __PRETTY_FUNCTION__ <<std::endl;
    return normalHouse_;
}
