#include "Character.hpp"
#include "Collider.hpp"
#include <iostream>

Character::Character(Collider *coll)
    : Entity(coll)
{}

void Character::interact()
{
    std::cout << "Character Interaction with ";
    collider_->collide();
}
