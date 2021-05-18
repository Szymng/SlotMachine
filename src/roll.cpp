#include "roll.hpp"

/* auxiliary function to randomize integers*/

unsigned int rand_i(unsigned int min, unsigned int max)
{
    static std::random_device rd;  //Will be used to obtain a seed for the random number engine
    static std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<unsigned int> distrib(min, max);
 
    return distrib(gen);
}

Roll::Roll()
{
    symbols.emplace_back(slot_machine_cherry);
    symbols.emplace_back(slot_machine_seven);
    symbols.emplace_back(slot_machine_lemon);
    symbols.emplace_back(slot_machine_money);
    symbols.emplace_back(slot_machine_plum);
    symbols.emplace_back(slot_machine_diamond);
    symbols.emplace_back(slot_machine_horseshoe);
    symbols.emplace_back(slot_machine_star);
    symbols.emplace_back(slot_machine_watermelon);
}

std::string Roll::single_result()
{
    return symbols[rand_i(0, 8)];
}