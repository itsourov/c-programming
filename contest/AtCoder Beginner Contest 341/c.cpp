#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
bool isSafe(int i, int j, int h, int w)
{
    if (i >= 0 && i < h && j >= 0 && j < w)
    {
        return true;
    }
    return false;
}
bool isPossible(vector<string> &vt, string &way, int i, int j, int h, int w)
{
    if (vt[i][j] == '#')
        return false;
    for (auto item : way)
    {

        if (item == 'L')
            j--;
        else if (item == 'R')
            j++;
        else if (item == 'U')
            i--;
        else
            i++;

        if (!isSafe(i, j, h, w))
        {
            return false;
        }
        if (vt[i][j] == '#')
            return false;
    }

    return true;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int h, w, n;
    cin >> h >> w >> n;
    string way;
    cin >> way;
    vector<string> vt(h);
    for (int i = 0; i < h; i++)
    {
        cin >> vt[i];
    }

    // cout << way << endl;
    int count = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (isPossible(vt, way, i, j, h, w))
            {
                // cout << i << " " << j << endl;
                count++;
            }
        }
    }
    cout << count << endl;
}
