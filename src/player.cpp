#include "player.hpp"

Player::Player()
{
    std::ifstream user_config("settings/user_config.txt");
    bool choice_config;
    unsigned int money_config;
    if(user_config.is_open())
    {
        user_config >> money_config >> choice_config;
    }
    user_config.close();
    money = money_config;
}

//Player::Player(unsigned int money_, bool decision_) : money(money_),
//decision(decision_)
//{}

//return the reward - pewnie mozna byloby lepiej to zrobic niz if-else
unsigned int Player::get_money(unsigned int const &win_option_)
{
    if (win_option_ == 1)
        return money = money + 200;
    else if (win_option_ == 2)
        return money = money + 300;
    else if (win_option_ == 3)
        return money = money + 1000;
    else if (win_option_ == 4)
        return money = money + 2000;
    else if (win_option_ == 5)
        return money = money + 5000;
    else
        return money;
}

//wpisowe zeby zagrac
unsigned int Player::pay_money()
{
    if (money != 0)
    {
        std::cout << "Paid 100\n";
        return money -= 100;
    }
    else
        return 0;
}

//Check stan konta of player
bool Player::check_money()
{
    std::cout << "Current balance: " << money << std::endl; // debugging line
    if(money < 100)
    {
        std::cout << "Not enough money. Use cheats.\n";
        return false;
    }
    else
        return true;
}

 void Player::save()
 {
     std::ofstream user_config("settings/user_config.txt");
     if(user_config.is_open())
     {
         user_config << money;
     }
     user_config.close();
 }