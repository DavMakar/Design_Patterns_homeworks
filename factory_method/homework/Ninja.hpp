#ifndef NINJA_HPP
#define NINJA_HPP

#include "GameCharacter.hpp"

class Ninja: public GameCharacter{
public:
    Ninja();
    void attack() override;
};

#endif //NINJA_HPP