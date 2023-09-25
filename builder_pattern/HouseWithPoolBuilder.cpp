#include "HouseWithPoolBuilder.hpp"

#include <iostream>

HouseWithPoolBuilder::HouseWithPoolBuilder()
:poolHouse_{new House()}
{
}

void HouseWithPoolBuilder::reset()
{
    delete poolHouse_;
    poolHouse_ = new House();
}

void HouseWithPoolBuilder::addWall()
{
    poolHouse_->setWall(true);
}

void HouseWithPoolBuilder::addDoor()
{
    poolHouse_->setDoor(true);
}

void HouseWithPoolBuilder::addRoof()
{
    poolHouse_->setRoof(true);
}

void HouseWithPoolBuilder::addPool()
{
    poolHouse_->setPool(true);
}

House* HouseWithPoolBuilder::getResult()
{
    std::cout<< __PRETTY_FUNCTION__ << std::endl;
    return poolHouse_;
}
