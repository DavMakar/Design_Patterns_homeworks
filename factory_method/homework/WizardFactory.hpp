#ifndef WIZARD_FACTORY_HPP
#define WIZARD_FACTORY_HPP

#include "GameCharacterFactory.hpp"
#include "GameCharacter.hpp"

class WizardFactory: public GameCharacterFactory{
public:
    std::unique_ptr<GameCharacter> create() override;
};

#endif //WIZARD_FACTORY_HPP
