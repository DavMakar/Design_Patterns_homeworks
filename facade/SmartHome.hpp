#ifndef SMART_HOME_FACADE_HPP
#define SMART_HOME_FACADE_HPP

#include "LightSystem.hpp"
#include "CameraSystem.hpp"
#include "SecuritySystem.hpp"

#include <memory>

class SmartHome{
public:
    void lock();

private:
    LightSystem lightsSys;
    CameraSystem cameraSys;
    SecuritySystem securitySys;
};

#endif //SMART_HOME_FACADE_HPP
