#include "WizardFactory.hpp"
#include "Wizard.hpp"

std::unique_ptr<GameCharacter> WizardFactory::create()
{
    return std::make_unique<Wizard>();
}