
#include <bits/stdc++.h>
using namespace std;

#define int long long
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, s, k;
    cin >> n >> s >> k;

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int price, qty;
        cin >> price >> qty;
        total += price * qty;
    }
    if (total < s)
        total += k;
    cout << total << endl;
}