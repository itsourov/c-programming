#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int arr[9][9];
bool isValid(int row, int col, int num)
{
    for (int i = 0; i < 9; i++)
    {
        if (arr[row][i] == num)
        {
            return false;
        }
        if (arr[i][col] == num)
        {
            return false;
        }
    }
    int rowStart = (row / 3) * 3;
    int colStart = (col / 3) * 3;
    for (int i = rowStart; i < rowStart + 3; i++)
    {
        for (int j = colStart; j < colStart + 3; j++)
        {
            if (arr[i][j] == num)
            {
                return false;
            }
        }
    }

    return true;
}

bool findEmptyLocation(int &x, int &y)
{
    int Min = 10, cnt = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[i][j] == 0)
            {
                int cnt = 0;
                for (int k = 1; k <= 9; k++)
                {
                    if (isValid(i, j, k))
                        cnt++;
                }
                if (cnt < Min)
                {
                    Min = cnt;
                    x = i;
                    y = j;
                }
            }
        }
    }
    if (Min < 10)
        return true;
    return false;
}

bool rec()
{
    int row, col;
    if (!findEmptyLocation(row, col))
    {
        return true;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (isValid(row, col, i))
        {
            arr[row][col] = i;
            if (rec())
            {
                return true;
            }
            arr[row][col] = 0;
        }
    }
    return false;
}
void solve(int tc)
{

    for (int i = 0; i < 9; i++)
    {

        string s;
        cin >> s;
        for (int j = 0; j < 9; j++)
        {

            if (s[j] == '.')
                s[j] = '0';
            arr[i][j] = (s[j] - '0');
        }
    }
    cout << "Case " << tc << ":" << endl;
    rec();
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    for (int i = 1; i <= t; i++)
    {

        solve(i);
    }
}
