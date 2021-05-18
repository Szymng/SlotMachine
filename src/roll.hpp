//roll with game symbols

#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <random>


class Roll
{
private:
    std::vector<std::string> symbols; //could use array, but vector gives me a possibility to add more symbols
public:
    Roll(); //constructor that creates roll with symbols
    std::string single_result(); //returns single roll result
};

std::string const slot_machine_cherry = "cherry";
std::string const slot_machine_seven = "seven";
std::string const slot_machine_lemon = "lemon";
std::string const slot_machine_money = "money";
std::string const slot_machine_plum = "plum";
std::string const slot_machine_diamond = "diamond";
std::string const slot_machine_horseshoe = "horseshoe";
std::string const slot_machine_star = "star";
std::string const slot_machine_watermelon = "watermelon";