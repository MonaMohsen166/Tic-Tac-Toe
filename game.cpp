#include <iostream>

using namespace std;
void initialize(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        // Loop over each column of the current row
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = '-';
        }
    }
}
void printBoard(char board[3][3])
{
    cout << "The board current is:\n";
    for (int i = 0; i < 3; i++)
    {
        // Loop over each column of the current row
        for (int j = 0; j < 3; j++)
        {
            // Print the character followed by a space
            cout << board[i][j] << ' ';
        }
        cout << endl; // Move to the next line after each row
    }
}
char checkWinner(char board[3][3])
{
    char userChoice;
    char V1, V2, V3, V4, V5, V6, V7, V8, V9 = '-';
    V1 = board[0][0];
    V2 = board[0][1];
    V3 = board[0][2];
    V4 = board[1][0];
    V5 = board[1][1];
    V6 = board[1][2];
    V7 = board[2][0];
    V8 = board[2][1];
    V9 = board[2][2];

    if (V1 == V2 && V2 == V3)
    {
        if (V1 == 'O')
        {

            cout << "Player one is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
        else if (V1 == 'X')
        {
            cout << "Player two is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
    }
    else if (V4 == V5 && V5 == V6)
    {
        if (V4 == 'O')
        {
            cout << "Player one is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
        else if (V4 == 'X')
        {
            cout << "Player two is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
    }
    else if (V7 == V8 && V8 == V9)
    {
        if (V7 == 'O')
        {
            cout << "Player one is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
        else if (V7 == 'X')
        {
            cout << "Player two is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
    }
    else if (V1 == V4 && V4 == V7)
    {
        if (V1 == 'O')
        {
            cout << "Player one is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
        else if (V1 == 'X')
        {
            cout << "Player two is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
    }
    else if (V2 == V5 && V5 == V8)
    {
        if (V2 == 'O')
        {
            cout << "Player one is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
        else if (V2 == 'X')
        {
            cout << "Player two is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
    }
    else if (V3 == V6 && V6 == V9)
    {
        if (V3 == 'O')
        {
            cout << "Player one is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
        else if (V3 == 'X')
        {
            cout << "Player two is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
    }
    else if (V1 == V5 && V5 == V9)
    {
        if (V1 == 'O')
        {
            cout << "Player one is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
        else if (V1 == 'X')
        {
            cout << "Player two is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
    }
    else if (V3 == V5 && V5 == V7)
    {
        if (V3 == 'O')
        {
            cout << "Player one is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
        else if (V3 == 'X')
        {
            cout << "Player two is the winner \u263A\uFE0F,do you want to play again?(y/n)\n";
            cin >> userChoice;
        }
    }
    return userChoice;
}
int main()
{
    char userChoice;
    int row, col;
    char V1, V2, V3, V4, V5, V6, V7, V8, V9 = '-';
    char board[3][3] = {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}};

    printBoard(board);
    while (true)
    {
        // if user chose to play another game, initialize board
        if (userChoice == 'y')
        {
            initialize(board);
            printBoard(board);
        }

        // Player 1 input
        cout << "Enter your move(player one):\n";
        cin >> row >> col;
        row = row - 1;
        col = col - 1;
        // Loop over each row of the board
        for (int i = 0; i < 3; i++)
        {
            // Loop over each column of the current row
            for (int j = 0; j < 3; j++)
            {
                if (i == row && j == col)
                {
                    board[i][j] = 'O';
                }
            }
        }
        printBoard(board);
        userChoice = checkWinner(board);
        if (userChoice == 'n')
        {
            break;
        }
        else if (userChoice == 'y')
        {
            continue;
        }
        // Player 2 input
        cout << "Enter your move(player two):\n";
        cin >> row >> col;
        row = row - 1;
        col = col - 1;
        // Loop over each row of the board
        for (int i = 0; i < 3; i++)
        {
            // Loop over each column of the current row
            for (int j = 0; j < 3; j++)
            {
                if (i == row && j == col)
                {
                    board[i][j] = 'X';
                }
            }
        }
        printBoard(board);
        userChoice = checkWinner(board);
        if (userChoice == 'n')
        {
            break;
        }
        else if (userChoice == 'y')
        {
            continue;
        }
    }

    return 0;
}
