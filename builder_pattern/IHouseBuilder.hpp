#ifndef HOUSE_BUILDER_INTERFACE_HPP
#define HOUSE_BUILDER_INTERFACE_HPP

class House;

class IHouseBuilder{
public:
    virtual void reset() = 0;
    virtual void addWall() = 0;
    virtual void addDoor() = 0;
    virtual void addRoof() = 0;
    virtual void addPool() = 0; 
    virtual House* getResult() = 0;
    virtual ~IHouseBuilder(){};  
};

#endif //HOUSE_BUILDER_INTERFACE_HPP