#pragma once
#include <iostream>
#include "columns.hpp"

class Game
{
private:
    Columns result;
public:
    int win_option; //determine which reward will be granted
    // bool win = false; //still don't know what to do with this
    void start_game();
};