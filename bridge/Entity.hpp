#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <memory>

class Collider;

class Entity{
public:
    Entity(Collider* collider);
    virtual void interact() = 0;

protected:
    Collider* collider_;
};

#endif //ENTITY_HPP