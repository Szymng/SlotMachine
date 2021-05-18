#pragma once
#include <iostream>
#include <string>
#include "roll.hpp"

/*  columns with symbol rolls   */
class Columns : public Roll
{
private:
    std::string roll1; //this elements help with adding symbols to game roll
    std::string roll2;
    std::string roll3;
public:
    Columns();
    int check_result();
    void Show_result();
    void randomize_result();
};