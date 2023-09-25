#include "NinjaFactory.hpp"
#include "Ninja.hpp"

std::unique_ptr<GameCharacter> NinjaFactory::create()
{
    return std::make_unique<Ninja>();
}