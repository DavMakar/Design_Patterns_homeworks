#ifndef LOGISTICS_HPP
#define LOGISTICS_HPP

#include "Transport.hpp"

class Logistics{
public:
    void planDelivery();
    virtual Transport* createTransport() = 0;
    virtual ~Logistics();
};

#endif //LOGISTICS_HPP

