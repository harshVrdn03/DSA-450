#include <bits/stdc++.h>
using namespace std;
bool isSafe(int board[][30], int x, int y, int n)
{
    // for col
    for (int row = 0; row < n; row++)
    {
        if (board[row][y] == 1)
        {
            return false;
        }
    }
    int row = x;
    int col = y;
    // for upper diagonal left
    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }
    // for upper diagonal right
    while (row >= 0 && col < n)
    {
        if (board[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}
bool Nqueen(int board[][30], int row, int n)
{
    // reach at the end of the board
    if (row >= n)
    {
        return true;
    }
    // check column in that row
    for (int col = 0; col < n; col++)
    {
        if (isSafe(board, row, col, n))
        {
            board[row][col] = 1;
            // for the next row
            if (Nqueen(board, row + 1, n))
            {
                return true;
            }
            // if NOT possible
            board[row][col] = 0;
        }
    }
    return false;
}
int main()
{
    cout << "Enter number of queens: ";
    int n;
    cin >> n;
    int board[30][30];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            board[i][j] = 0;
        }
    }
    if (Nqueen(board, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
}