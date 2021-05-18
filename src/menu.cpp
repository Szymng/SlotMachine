#include "menu.hpp"

void Menu::Start()
{
    std::cout << "Type 'start' then 'pull' to play, 'q' to exit or 'instruction'.\n";
    std::string control;
    while(true)
    {
        std::cin >> control;
        if(control == "start")
        {
            slot_machine.Pull(player1);
            std::cout << "Type 'start' then 'pull' to play, 'q' to exit or 'instruction'.\n";
        }
        else if (control == "q")
            break;
        else if (control == "instruction")
            Instruction();
        else if (control == "cheat")
        {
            player1.get_money(5);
            std::cout << "Cheated successfully\n";
        }
        else
            std::cout << "unknown command\n";
            continue;
    }
    player1.save();
}

void Menu::Instruction()
{
    std::string instruction_text;
    std::ifstream instruction_file("settings/instruction.txt");
    if (instruction_file.is_open())
    {
        instruction_text.assign(std::istreambuf_iterator<char>(instruction_file), std::istreambuf_iterator<char>());
    }
    instruction_file.close();
    std::cout << instruction_text;
}