#include "SeaLogistics.hpp"

#include "Ship.hpp"

Transport* SeaLogistics::createTransport()
{
    return new Ship();
}