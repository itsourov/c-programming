#include <iostream>
#include <vector>
using namespace std;
#define int long long
#define endl '\n'
bool isValid(vector<vector<char>> &arr, int row, int col, char num)
{
    for (int i = 0; i < 16; i++)
    {
        if (arr[i][col] == num)
            return false;
        if (arr[row][i] == num)
            return false;

        if (arr[4 * (row / 4) + i / 4][4 * (col / 4) + i % 4] == num)
            return false;
    }

    return true;
}
bool rec(vector<vector<char>> &arr)
{

    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (arr[i][j] == '-')
            {

                for (char k = 'A'; k <= 'P'; k++)
                {
                    if (isValid(arr, i, j, k))
                    {
                        arr[i][j] = k;
                        if (rec(arr))
                        {
                            return true;
                        }
                        else
                            arr[i][j] = 0;
                    }
                }
                return false;
            }
        }
    }

    return true;
}
void solve(char c)
{
    vector<vector<char>> arr(16);
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            char dum;
            if (i == 0 && j == 0)
            {
                dum = c;
            }
            else
                cin >> dum;
            arr[i].push_back(dum);
        }
    }
    rec(arr);
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
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
    // cin >> t;
    t = 1;
    char c;
    bool first = true;
    while (cin >> c)
    {
        if (!first)
        {
            cout << endl;
        }
        solve(c);
        first = false;
    }
}
