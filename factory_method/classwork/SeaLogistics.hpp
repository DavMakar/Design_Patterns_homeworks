#ifndef SEA_LOGISTICS_HPP
#define SEA_LOGISTICS_HPP

#include "Logistics.hpp"
class Transport;

class SeaLogistics: public Logistics{
public:
    Transport* createTransport() override;
};
#endif //SEA_LOGISTICS_HPP