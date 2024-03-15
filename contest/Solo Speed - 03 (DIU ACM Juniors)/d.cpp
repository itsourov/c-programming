#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
pair<int, int> nextTime(int h, int m)
{
    m++;
    if (m > 59)
    {
        m = 0;
        h++;
    }
    if (h > 23)
    {
        h = 0;
    }
    return {h, m};
}
bool isValid(int h, int m)
{
    if (h >= 0 && h < 24 && m >= 0 && m < 60)
        return true;
    return false;
}
pair<int, int> swapX(int h, int m)
{

    int arr[4];
    arr[0] = h / 10;
    arr[1] = h % 10;
    arr[2] = m / 10;
    arr[3] = m % 10;

    int newH = arr[0] * 10 + arr[2];
    int newM = arr[1] * 10 + arr[3];
    return {newH, newM};
}
void solve()
{
    int h, m;
    cin >> h >> m;
    if (isValid(swapX(h, m).first, swapX(h, m).second))
    {
        // cout << swapX(h, m).first << "  " << swapX(h, m).second << endl;
        cout << h << " " << m << endl;
    }
    else
    {
        while (1)
        {
            pair<int, int> next = nextTime(h, m);
            // cout << next.first << "-" << next.second << endl;
            if (isValid(swapX(next.first, next.second).first, swapX(next.first, next.second).second))
            {
                cout << next.first << " " << next.second << endl;
                break;
            }
            h = next.first;
            m = next.second;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}