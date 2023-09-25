#include <iostream>
#include "NormalHouseBuilder.hpp"
#include "HouseWithPoolBuilder.hpp"
#include "Director.hpp"
#include "House.hpp"

int main(){
    NormalHouseBuilder nh_builder;
    HouseWithPoolBuilder ph_builder;

    Director director(nh_builder);
    director.buildHouse();   
    House* normalHouse = nh_builder.getResult();

    director.setBuilder(ph_builder);
    House* poolHouse = ph_builder.getResult();   
}