#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n;
bool visited[10][10];
char arr[10][10];

map<string, int> mp;
bool valid(int i, int j)
{
    if (i >= 0 && i < n && j >= 0 && j < n)
    {
        return true;
    }
    return false;
}
void permutation(int i, int j, int count)
{
    if (count == 8)
    {
        string s = "00000000000000000000000000000000000000000000000000000000000000000000";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (visited[i][j])
                {
                    int index = i * n;
                    index += j;

                    s[index] = '1';
                }
            }
        }
        // cout << s << endl;
        mp[s]++;

        return;
    }
    if (!valid(i, j))
    {
        return;
    }
    if (visited[i][j])
    {
        return;
    }
    if (arr[i][j] == '.')
    {
        return;
    }
    visited[i][j] = true;
    permutation(i + 1, j, count + 1);
    permutation(i - 1, j, count + 1);
    permutation(i, j + 1, count + 1);
    permutation(i, j - 1, count + 1);
    visited[i][j] = false;
}
void solve()
{
    cin >> n;
    int xCount = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            permutation(i, j, 0);
        }
    }
    cout << mp.size() << endl;
    mp.clear();
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
        // cout << "........" << endl;
    }
}
