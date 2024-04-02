#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int getStage(int x)
{
    if ((x & (x - 1)) == 0)
    {
        return INT_MAX;
    }

    int n = 1;
    while (x % 2 == 0)
    {
        x /= 2;
        n++;
    }
    return n;
}

void solve()
{
    int x, y;
    cin >> x >> y;

    int stagex = getStage(x);
    int stagey = getStage(y);

    if (stagex > stagey)
    {
        cout << "-inf" << endl;
    }
    else if (stagex < stagey)
    {
        cout << "inf" << endl;
    }
    else
    {
        if (stagex == INT_MAX)
        {

            if (x >= y)
            {
                int count = 0;
                while (x > y)
                {
                    y = y << 1;
                    count++;
                }
                cout << count << endl;
            }
            else
            {
                int count = 0;
                while (x < y)
                {
                    x = x << 1;
                    count--;
                }
                cout << count << endl;
            }
        }
        else
        {
            int diff = abs(y - x);
            diff /= (1 << stagex);
            if (x > y)
            {
                diff *= -1;
            }

            cout << diff << endl;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}