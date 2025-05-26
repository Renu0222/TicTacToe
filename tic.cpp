#include <iostream>
using namespace std;

char board[3][3];

// Initialize the board with spaces
void initializeBoard() {
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            board[i][j] = ' ';
}

// Print the current board
void printBoard() {
    cout << "-------------\n";
    for(int i=0; i<3; i++) {
        cout << "| ";
        for(int j=0; j<3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}

// Check if a player has won
bool checkWinner(char player) {
    // Check rows and columns
    for(int i=0; i<3; i++) {
        if((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
           (board[0][i] == player && board[1][i] == player && board[2][i] == player))
            return true;
    }
    // Check diagonals
    if((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
       (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        return true;

    return false;
}

// Check if the board is full (tie)
bool isBoardFull() {
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(board[i][j] == ' ')
                return false;
    return true;
}

int main() {
    initializeBoard();
    char currentPlayer = 'X';
    int row, col;

    while(true) {
        printBoard();
        cout << "Player " << currentPlayer << ", enter your move (row and column: 0 1 or 2): ";
        cin >> row >> col;

        // Validate input
        if(row < 0 || row > 2 || col < 0 || col > 2) {
            cout << "Invalid position! Try again.\n";
            continue;
        }
        if(board[row][col] != ' ') {
            cout << "Cell already occupied! Try again.\n";
            continue;
        }

        board[row][col] = currentPlayer;

        if(checkWinner(currentPlayer)) {
            printBoard();
            cout << "Player " << currentPlayer << " wins! Congratulations!\n";
            break;
        }

        if(isBoardFull()) {
            printBoard();
            cout << "It's a tie!\n";
            break;
        }

        // Switch player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    cout << "Game Over.\n";
    return 0;
}
