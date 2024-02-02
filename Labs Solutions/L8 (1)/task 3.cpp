#include <iostream>
using namespace std;
class TicTacToe
{
    private:
     char board[3][3];
    public:
    TicTacToe() 
    {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = ' ';
            }
        }
    }
    void drawboard() {
        system("cls");
        cout << "\tWelcome to Tic Tac Toe! \n";
        for (int i = 0; i < 3; i++) {
            cout << "\t     |     |     " << endl;
            cout << "\t  " << board[i][0] << "  |  " << board[i][1] << "  |  " << board[i][2] << endl;
            cout << "\t_____|_____|_____" << endl;
        }
        cout << "\t     |     |     " << endl;
    }
    void move(int n, char player) {
        int row, col;
        bool validMove = false;
        cout << "Player " << player << " enter the number of the field you would like to move:\n";
        while (!validMove) {
            cin >> n;
            if (n < 1 || n > 9) {
                cout << "Invalid input. Please enter a number between 1 and 9:\n";
            }
            else if (board[(n - 1) / 3][(n - 1) % 3] != ' ') {
                cout << "This is already taken\n";
            }
            else {
                row = (n - 1) / 3;
                col = (n - 1) % 3;
                board[row][col] = player;
                validMove = true;
            }
        }
    }
    void playersign(char& player) {
        if (player == 'X') {
            player = 'O';
        }
        else if (player == 'O') {
            player = 'X';
        }
    }
    bool draw() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ')
                    return false;
            }
        }
        return true;
    }
    bool win(char player) {
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
                return true;
            }
        }
        for (int j = 0; j < 3; j++) {
            if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
                return true;
            }
        }
        if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
            return true;
        }
        if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
            return true;
        }
        return false;
    }
};
int main() {
    TicTacToe game;
    char player = 'X';
    int n = 0;
    do {
        game.drawboard();
        game.move(n, player);
        game.playersign(player);

    } while (!game.win('X') && !game.win('O') && !game.draw());
    game.drawboard();
    if (game.win('X')) {
        cout << "Player X wins!\n";
    }
    else if (game.win('O')) {
        cout << "Player O wins!\n";
    }
    else {
        cout << "It's a draw!\n";
    }
}
