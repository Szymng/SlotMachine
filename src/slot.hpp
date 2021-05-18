#pragma once
#include <iostream>
#include "game.hpp"
#include "player.hpp"

class Slot
{
private: 
    Game slotGame;
public: 
    void Pull(Player &player1); //pull to start the game
    void reward(Player &player1);
};
