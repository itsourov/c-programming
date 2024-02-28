#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int arr[110];
void solve()
{
    int n;
    cin >> n;
    int dum;
    int p;
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
        cin >> dum;
        arr[dum]++;
    }
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        cin >> dum;
        arr[dum]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << "Oh, my keyboard!" << endl;
            return;
        }
    }
    cout << "I become the guy." << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}