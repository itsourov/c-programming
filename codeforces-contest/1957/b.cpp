#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int bigNumWith1 = 34359738368;
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> ans;

    int power = 0;
    while ((1 << power) - 1 <= k)
    {
        power++;
    }

    power--;

    int baki = k - ((1 << power) - 1);

    ans.push_back((1 << power) - 1);
    n--;

    while (n--)
    {
        ans.push_back(1);
        baki--;
    }

    ans.back() += baki;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}