#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = (2 * 1e5) + 100;
char arr[2][N];
bool valid(int row, int col, int n)
{
    if (row >= 2)
    {
        return false;
    }
    if (col >= n)
    {
        return false;
    }
    return true;
}
bool found = false;

string firstAns = "";
int sameCount = 0;
void walk(int row, int col, string s, int n, int count)
{
    // if (found)
    // {
    //     return;
    // }
    if (!valid(row, col, n))
    {
        return;
    }

    s += (arr[row][col]);
    // cout << row << " " << col << endl;
    if (row == 1 && col == n - 1)
    {

        if (!found)
        {
            cout << s << endl;
            firstAns = s;
        }
        else
        {
            if (firstAns == s)
            {

                sameCount++;
            }
        }
        // cout << count << endl;
        found = true;
        return;
    }

    if (valid(row, col + 1, n) && valid(row + 1, col, n))
    {
        if (arr[row][col + 1] == arr[row + 1][col] || arr[row][col + 1] == '0')
        {
            if (arr[row][col + 1] == arr[row + 1][col])
            {
                count++;
            }
            walk(row, col + 1, s, n, count);

            walk(row + 1, col, s, n, count);
        }
        else
        {
            walk(row + 1, col, s, n, count);
            walk(row, col + 1, s, n, count);
        }
    }
    else
    {
        walk(row, col + 1, s, n, count);
        walk(row + 1, col, s, n, count);
    }

    s.pop_back();
}
void solve()
{
    int n;
    cin >> n;
    found = false;
    sameCount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[0][i];
        // cout << arr[0][i];
    }
    // cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[1][i];
        // cout << arr[0][i];
    }

    // cout << endl;
    string s = "";
    walk(0, 0, s, n, 0);
    cout << sameCount + 1 << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
}