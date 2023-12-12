#ifndef CAPSULE_COLLIDER_HPP
#define CAPSULE_COLLIDER_HPP

#include "Collider.hpp"

class CapsuleCollider:public Collider{
    virtual void collide() override;
};

#endif //CAPSULE_COLLIDER_HPP