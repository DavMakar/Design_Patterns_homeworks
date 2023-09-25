#ifndef WIZARD_HPP
#define WIZARD_HPP

#include "GameCharacter.hpp"

class Wizard: public GameCharacter{
public:
    Wizard();
    void attack() override;
};

#endif //WIZARD_HPP