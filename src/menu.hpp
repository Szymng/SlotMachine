#pragma once
#include <iostream>
#include "slot.hpp"
#include "player.hpp"

class Menu 
{
private:
    Player player1;
    Slot slot_machine;
public:
    void Start();
    static void Instruction();
};
