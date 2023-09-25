#include "RoadLogistics.hpp"

#include "Truck.hpp"

Transport* RoadLogistics::createTransport()
{
    return new Truck();
}