#include "Logistics.hpp"

void Logistics::planDelivery()
{
    Transport* transport = createTransport();
    transport->deliver();
    delete transport; 
}

Logistics::~Logistics()
{}
