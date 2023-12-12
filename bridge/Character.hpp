#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Entity.hpp"

class Character: public Entity{
public:
    Character(Collider* coll);
    void interact() override;
};

#endif //CHARACTER_HPP