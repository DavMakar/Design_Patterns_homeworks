#include "GameCharacterFactory.hpp"
#include "NinjaFactory.hpp"
#include "WizardFactory.hpp"

#include <memory>

int main(){
    std::unique_ptr<GameCharacterFactory> ninjaFactory = std::make_unique<NinjaFactory>();
    std::unique_ptr<GameCharacterFactory> wizardFactory = std::make_unique<WizardFactory>();

    ninjaFactory->spawnAndAttack();
    wizardFactory->spawnAndAttack();
   
}