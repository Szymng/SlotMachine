#include "columns.hpp"

// This method randomizes columns and return result
Columns::Columns()
{
    roll1 = Roll::single_result();
    roll2 = Roll::single_result();
    roll3 = Roll::single_result();
}

void Columns::randomize_result()
{
    roll1 = Roll::single_result();
    roll2 = Roll::single_result();
    roll3 = Roll::single_result();
}

int Columns::check_result()
{
    if(roll1 == roll2 && roll1 == roll3)
    {
        std::cout << "Win\n"; //stream to remove (testing purpose)
        if(roll1 == "cherry") //200
            return 1;
        else if(roll1 == "seven") //300
            return 2;
        else if(roll1 == "lemon") //1000
            return 3;
        else if(roll1 == "star") //2000
            return 4;
        else if(roll1 == "diamond") //5000
            return 5;
        else
            return 6;
    }
    else
        return 0;
}

void Columns::Show_result()
{
    randomize_result();
    std::cout << roll1 << "\t"
    << roll2 << "\t"
    << roll3 << std::endl;
}
