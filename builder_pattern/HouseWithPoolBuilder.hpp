#ifndef HOUSE_WITH_POOL_BUILDER_HPP
#define HOUSE_WITH_POOL_BUILDER_HPP

#include "IHouseBuilder.hpp"
#include "House.hpp"

class HouseWithPoolBuilder: public IHouseBuilder{
public:
    HouseWithPoolBuilder();

    void reset() override;
    void addWall() override;
    void addDoor() override;
    void addRoof() override;
    void addPool() override;

public:
    House* getResult();
private:
    House* poolHouse_;

};

#endif //HOUSE_WITH_POOL_BUILDER_HPP
