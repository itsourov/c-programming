#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n], used[n] = {0};
    vector<int> give, receive;
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
        if (arr[i] != 0)
        {
            used[arr[i]] = 1;
        }
        else
        {
            give.push_back(i);
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        if (!used[i])
            receive.push_back(i); // era pabe
    }

    for (int i = 0; i < give.size(); ++i)
    {
        if (give[i] == receive[i])
        {
            if (i == 0)
                swap(give[i], give[i + 1]);
            else
                swap(give[i], give[i - 1]);
        }
    }

    for (int i = 0; i < give.size(); ++i)
    {
        arr[give[i]] = receive[i];
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << arr[i] << " ";
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