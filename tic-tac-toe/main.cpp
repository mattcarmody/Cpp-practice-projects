#include <iostream>
#include <vector>
#include "funcs.hpp"

std::vector<char> game_board = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
bool active_game = true;
char mark = 'X';
int choice = 0;

int main() {
    while (active_game == true) {
        display_board(game_board);
        choice = enter_move(mark);
        game_board[choice] = mark;
        active_game = check_for_winner(game_board);
        if (not active_game) {
            winner(game_board, mark);
            break;
        }
        active_game = check_for_draw(game_board);
        if (not active_game) {
            draw(game_board);
            break;
        }
        if (mark == 'X') {mark = 'O';}
        else {mark = 'X';}
    }
}
