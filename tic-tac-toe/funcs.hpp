#include <vector>

void display_board(std::vector<char> gb);
int enter_move(char mark);
bool check_for_winner(std::vector<char> gb);
bool check_for_draw(std::vector<char> gb);
void winner(std::vector<char> gb, char mark);
void draw(std::vector<char> gb);
