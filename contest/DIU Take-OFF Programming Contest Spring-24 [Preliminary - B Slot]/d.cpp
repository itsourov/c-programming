#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    int cost = 0;
    int temp;
    int count = 0;
    for (int i = 1; i <= 10; i++)
    {
        cin >> temp;
        if (temp == 0)
        {
            cost += i;
            count++;
            if (count >= x && cost <= n)
            {
                cout << "Happy" << endl;
                return;
            }
        }
    }
    cout << "Sad" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    int tc = 0;
    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
