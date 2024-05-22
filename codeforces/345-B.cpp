#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int k;
    string a;
    cin >> a >> k;
    for (int i = 0; i < a.size(); i++)
    {
        int temp = i;

        for (int j = i + 1; j < a.size() && j - i <= k; j++)
        {
            if (a[j] > a[temp])
                temp = j;
        }

        for (int y = temp; y > i; y--)
        {
            swap(a[y], a[y - 1]);
        }

        k -= temp - i;
    }
    cout << a << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    int tc = 1;
    // cin >> t;

    while (t--)
    {
        // cout << "Case " << tc << ": ";
        solve();
        tc++;
    }
}