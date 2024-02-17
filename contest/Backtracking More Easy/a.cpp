#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define int long long
#define endl '\n'
bool isValid(vector<vector<int>> &arr, int row, int col, int num)
{
    for (int i = 0; i < 9; i++)
    {
        if (arr[i][col] == num)
            return false;
        if (arr[row][i] == num)
            return false;

        if (arr[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == num)
            return false;
    }

    return true;
}
bool rec(vector<vector<int>> &arr)
{

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[i][j] == 0)
            {

                for (int k = 1; k <= 9; k++)
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
void solve()
{
    vector<vector<int>> arr(9);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            char dum;
            cin >> dum;
            arr[i].push_back(dum - '0');
        }
    }
    rec(arr);
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
    while (t--)
    {
        solve();
        if (t != 0)
        {
            string s;
            cin >> s;
            cout << s << endl;
            // cout << s << "asdadad" << endl;
        }
    }
}
