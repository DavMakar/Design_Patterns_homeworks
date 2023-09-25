#include "Logistics.hpp"
#include "RoadLogistics.hpp"
#include "SeaLogistics.hpp"

#include <memory>

int main(){
    std::unique_ptr<Logistics> roadFactory = std::make_unique<RoadLogistics>();
    std::unique_ptr<Logistics> seaFactory = std::make_unique<SeaLogistics>();
    
    roadFactory->planDelivery();
    seaFactory->planDelivery();

}