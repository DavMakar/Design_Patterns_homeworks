#ifndef HOUSE_HPP
#define HOUSE_HPP

#include <iostream>

class House{
private:
    bool wall;
    bool door;
    bool pool;
    bool roof;
public:
    void setWall(bool);
    void setDoor(bool);
    void setPool(bool);
    void setRoof(bool);
};

#endif //HOUSE_HPP