#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
bool isValid(vector<vector<int>> &vt, int row, int col, int num)
{
    for (int i = 0; i < 4; i++)
    {
        if (vt[row][i] == num)
        {
            return false;
        }
        if (vt[i][col] == num)
        {
            return false;
        }
    }
    int rowStart = (row / 2) * 2;
    int colStart = (col / 2) * 2;
    for (int i = rowStart; i < rowStart + 2; i++)
    {
        for (int j = colStart; j < colStart + 2; j++)
        {
            if (vt[i][j] == num)
            {
                return false;
            }
        }
    }

    return true;
}
bool rec(vector<vector<int>> &arr)
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 0)
            {

                for (int k = 1; k <= 4; k++)
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
void solve(int tc)
{
    vector<vector<int>> arr(9);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            char dum;
            cin >> dum;
            if (dum == '*')
                dum = '0';
            arr[i].push_back(dum - '0');
        }
    }
    cout << "Case #" << tc << ":" << endl;
    if (rec(arr) == false)
    {
        cout << "impossible" << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
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
    for (int i = 1; i <= t; i++)
    {

        solve(i);
    }
}
