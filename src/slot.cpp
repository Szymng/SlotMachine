#include "slot.hpp"

void Slot::Pull(Player& player1)
{
    std::string choice; //rozwiazanie tymczasowe, chce zaimplementowac sterowanie klawiatura
    player1.decision = player1.check_money();
    while(player1.decision)
    {
        reward(player1);
        std::cin >> choice;

        if (choice == "pull" || choice == "p") // pull - gram dalej
        {
            player1.decision = true;
            player1.decision = player1.check_money();
            player1.pay_money();
            slotGame.start_game();
        }
         else if (choice == "q")
         {
             player1.decision = false;
             break;
         }
         else
         {
             std::cout << "Try again\n";
             continue;
         }
    }
}

void Slot::reward(Player& player1)
{
    player1.get_money(slotGame.win_option);
}
