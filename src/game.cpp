#include "game.hpp"

void Game::start_game()
{
    result.Show_result();
    win_option = result.check_result();
}
