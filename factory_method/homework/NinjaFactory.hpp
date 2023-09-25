#ifndef NINJA_FACTORY_HPP
#define NINJA_FACTORY_HPP

#include "GameCharacterFactory.hpp"
#include "GameCharacter.hpp"

class NinjaFactory:public GameCharacterFactory{
public:
    std::unique_ptr<GameCharacter> create() override;
};

#endif //NINJA_FACTORY_HPP
