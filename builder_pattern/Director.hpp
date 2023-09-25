#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include "IHouseBuilder.hpp"

class Director
{
private:
    IHouseBuilder& builder_;
public:
    Director(IHouseBuilder& builder);
    void setBuilder(IHouseBuilder& builder);
    void buildHouse();
};

#endif //DIRECTOR_HPP