#include "GameCharacterFactory.hpp"

void GameCharacterFactory::spawnAndAttack()
{
    std::unique_ptr<GameCharacter> character = create();
    character->attack();
}

GameCharacterFactory::~GameCharacterFactory()
{   
}
