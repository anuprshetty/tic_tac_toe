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

void TicTacToe::setup() {
    char position = '1';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board_helper[i][j] = position++;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}
