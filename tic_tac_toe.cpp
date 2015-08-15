#include <iostream>
using namespace std;

class TicTacToe {
    char board[3][3];
    char board_helper[3][3];

   public:
    void setup();
    void your_turn();
    void computer_turn();
    string check_for_winner();
    void show_board();
};
