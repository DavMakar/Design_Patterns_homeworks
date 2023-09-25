#ifndef ROAD_LOGISTICS_HPP
#define ROAD_LOGISTICS_HPP

#include "Logistics.hpp"

class Transport;

class RoadLogistics:public Logistics{
public:
    Transport* createTransport() override;

};
#endif //ROAD_LOGISTICS_HPP