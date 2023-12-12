#include "SmartHome.hpp"

void SmartHome::lock()
{
    lightsSys.offLights();
    securitySys.lockDoors();
    cameraSys.startRecording();
}