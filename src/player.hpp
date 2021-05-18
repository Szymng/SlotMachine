#pragma once
#include <iostream>
#include <fstream> 

class Player
{
private:
    unsigned int money;
public:
    bool decision;
    Player();
//    Player(unsigned int money_, bool choice);
    unsigned int get_money(unsigned int const &win_option_);
    unsigned int pay_money();
    bool check_money();
    void save();
};