#ifndef GAME_CHARACTER_FACTORY_HPP
#define GAME_CHARACTER_FACTORY_HPP

#include "GameCharacter.hpp"
#include <memory>

class GameCharacterFactory{
public:
    virtual void spawnAndAttack();
    virtual std::unique_ptr<GameCharacter> create() = 0;
    virtual ~GameCharacterFactory();
};

#endif //GAME_CHARACTER_FACTORY_HPP