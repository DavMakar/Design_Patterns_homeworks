#include "Director.hpp"

Director::Director(IHouseBuilder& builder): builder_{builder}
{
}

void Director::setBuilder(IHouseBuilder &builder)
{
    builder_ = builder;
}

void Director::buildHouse(){
    builder_.reset();
    builder_.addDoor();
    builder_.addRoof();
    builder_.addWall();
    builder_.addPool();
}