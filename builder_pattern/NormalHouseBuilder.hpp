#ifndef NORMAL_HOUSE_BUILDER_HPP
#define NORMAL_HOUSE_BUILDER_HPP

#include "IHouseBuilder.hpp"
#include "House.hpp"

class NormalHouseBuilder: public IHouseBuilder{
public:
    NormalHouseBuilder();
    
    void reset() override;
    void addWall() override;
    void addDoor() override;
    void addRoof() override;
    void addPool() override;

public:
    House* getResult();

private:
    House* normalHouse_;
};

#endif // NORMAL_HOUSE_BUILDER_HPP
