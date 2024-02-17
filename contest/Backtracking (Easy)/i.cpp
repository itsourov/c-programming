#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
bool isSafe(int board[8][8], int row, int col)
{

    int i = col;
    while (i >= 0)
    {
        if (board[row][i])
        {
            return false;
        }
        i--;
    }

    i = row;
    while (i >= 0)
    {
        if (board[i][col])
        {
            return false;
        }
        i--;
    }

    i = row;
    int j = col;
    while (i > 0 && j > 0)
    {
        if (board[i][j])
        {
            return false;
        }
        i--;
        j--;
    }
    i = row, j = col;
    while (i > 0 && j < 8)
    {
        if (board[i][j])
        {
            return false;
        }
        i--;
        j++;
    }

    return true;
}
int adsad = 1;
void rec(int board[8][8], int row, int x, int y)
{

    if (row == 8)
    {
        adsad++;
        cout << " " << adsad << "      ";

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (board[i][j])
                    cout << j + 1 << " ";
            }
        }
        cout << endl;

        return;
    }
    for (int col = 0; col < 8; col++)
    {
        if (board[row][col] == 1)
        {
            rec(board, row + 1, x, y);
        }

        if (board[row][col] == 0 && isSafe(board, row, col))
        {
            board[row][col] = 1;

            rec(board, row + 1, x, y);
            board[row][col] = 0;
        }
    }
}
void solve()
{
    int x, y;
    cin >> x >> y;
    x--;
    y--;

    int board[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            board[i][j] = 0;
        }
    }
    board[x][y] = 1;
    rec(board, 0, x, y);
}
signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        // cin.ignore();
        cout << "SOLN       COLUMN" << endl;
        cout << " #      1 2 3 4 5 6 7 8" << endl;
        cout << endl;

        solve();
        if (t > 0)
        {
            cout << endl;
        }
    }
}