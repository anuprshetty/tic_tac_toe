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

void TicTacToe::your_turn() {
    int position, quotient, remainder;

    cout << "\nIt's your turn.\n";
    cout << "Enter the position to place 'X': ";

    cin >> position;

    position--;
    quotient = position / 3;
    remainder = position % 3;

    if (board[quotient][remainder] == ' ') {
        board[quotient][remainder] = 'X';
    } else {
        cout << "Invalid position.\n";
        your_turn();
    }
}

void TicTacToe::computer_turn() {
    cout << "\nIt's computer's turn.\n";

    for (int i = 0; i < 3; i++) {
        if ((board[i][0] != ' ' && board[i][1] != ' ') &&
            (board[i][0] == board[i][1]) && (board[i][2] == ' ')) {
            board[i][2] = 'O';
            return;
        } else if ((board[i][1] != ' ' && board[i][2] != ' ') &&
                   (board[i][1] == board[i][2]) && (board[i][0] == ' ')) {
            board[i][0] = 'O';
            return;
        } else if ((board[i][0] != ' ' && board[i][2] != ' ') &&
                   (board[i][0] == board[i][2]) && (board[i][1] == ' ')) {
            board[i][1] = 'O';
            return;
        } else if ((board[0][i] != ' ' && board[1][i] != ' ') &&
                   (board[0][i] == board[1][i]) && (board[2][i] == ' ')) {
            board[2][i] = 'O';
            return;
        } else if ((board[1][i] != ' ' && board[2][i] != ' ') &&
                   (board[1][i] == board[2][i]) && (board[0][i] == ' ')) {
            board[0][i] = 'O';
            return;
        } else if ((board[0][i] != ' ' && board[2][i] != ' ') &&
                   (board[0][i] == board[2][i]) && (board[1][i] == ' ')) {
            board[1][i] = 'O';
            return;
        }
    }

    if ((board[0][0] != ' ' && board[1][1] != ' ') &&
        (board[0][0] == board[1][1]) && (board[2][2] == ' ')) {
        board[2][2] = 'O';
        return;
    } else if ((board[1][1] != ' ' && board[2][2] != ' ') &&
               (board[1][1] == board[2][2]) && (board[0][0] == ' ')) {
        board[0][0] = 'O';
        return;
    } else if ((board[0][0] != ' ' && board[2][2] != ' ') &&
               (board[0][0] == board[2][2]) && (board[1][1] == ' ')) {
        board[1][1] = 'O';
        return;
    } else if ((board[0][2] != ' ' && board[1][1] != ' ') &&
               (board[0][2] == board[1][1]) && (board[2][0] == ' ')) {
        board[2][0] = 'O';
        return;
    } else if ((board[1][1] != ' ' && board[2][0] != ' ') &&
               (board[1][1] == board[2][0]) && (board[0][2] == ' ')) {
        board[0][2] = 'O';
        return;
    } else if ((board[0][2] != ' ' && board[2][0] != ' ') &&
               (board[0][2] == board[2][0]) && (board[1][1] == ' ')) {
        board[1][1] = 'O';
        return;
    } else {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    board[i][j] = 'O';
                    return;
                }
            }
        }
    }
}
