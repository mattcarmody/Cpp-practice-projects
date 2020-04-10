#include <algorithm>
#include <iostream>
#include <vector>

void display_board(std::vector<char> gb) {
    std::cout << "-------------\n";
    std::cout << "| " << gb[0] << " | " << gb[1] << " | " << gb[2] << " |\n";
    std::cout << "-------------\n";
    std::cout << "| " << gb[3] << " | " << gb[4] << " | " << gb[5] << " |\n";
    std::cout << "-------------\n";
    std::cout << "| " << gb[6] << " | " << gb[7] << " | " << gb[8] << " |\n";
    std::cout << "-------------\n";
}

int enter_move(char mark) {
    int choice;
    if (mark == 'X') {
        std::cout << "X, you're up!\n";
    } else {
        std::cout << "O's, make your choice!\n";
    }
    std::cout << "Enter a square number:\n  1   2   3\n  4   5   6\n  7   8   9\n";
    std::cin >> choice;
    return choice - 1;
}

bool check_for_winner(std::vector<char> gb) {
    if ((gb[0] != ' ' and gb[0] == gb[1] and gb[1] == gb[2]) or
        (gb[3] != ' ' and gb[3] == gb[4] and gb[4] == gb[5]) or
        (gb[6] != ' ' and gb[6] == gb[7] and gb[7] == gb[8]) or
        (gb[0] != ' ' and gb[0] == gb[3] and gb[3] == gb[6]) or
        (gb[1] != ' ' and gb[1] == gb[4] and gb[4] == gb[7]) or
        (gb[2] != ' ' and gb[2] == gb[5] and gb[5] == gb[8]) or
        (gb[0] != ' ' and gb[0] == gb[4] and gb[4] == gb[8]) or
        (gb[2] != ' ' and gb[2] == gb[4] and gb[4] == gb[6])) {return false;}
    return true;
}

bool check_for_draw(std::vector<char> gb) {
    if (std::find(gb.begin(), gb.end(),' ') == gb.end()) {
        return false;
    } else {
        return true;
    }
}

void winner(std::vector<char> gb, char mark) {
    display_board(gb);
    std::cout << mark << " is the winner! Congrats!\n";
}

void draw(std::vector<char> gb) {
    display_board(gb);
    std::cout << "Cat's game, boring.\n";
}
