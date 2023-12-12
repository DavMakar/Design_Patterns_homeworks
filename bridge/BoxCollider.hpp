#ifndef BOX_COLLIDER_HPP
#define BOX_COLLIDER_HPP

#include "Collider.hpp"

class BoxCollider: public Collider{
    void collide() override;
};

#endif //BOX_COLLIDER_HPP
