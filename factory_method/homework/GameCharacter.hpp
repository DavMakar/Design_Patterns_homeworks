#ifndef GAME_CHARACTER_HPP
#define GAME_CHARACTER_HPP

class GameCharacter
{
public:
    virtual void attack() = 0;
    virtual ~GameCharacter(){};
};

#endif //GAME_CHARACTER_HPP