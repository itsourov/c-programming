#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    int arr[n + 10] = {0};
    for (int i = s.size() - 1; i >= 0; i--)
    {

        mp[tolower(s[i])]++;
        arr[i] = mp.size();
    }
    int q;
    cin >> q;
    int x;
    for (int i = 0; i < q; i++)
    {

        cin >> x;
        if (i == q - 1)
        {
            cout << arr[x - 1];
        }
        else
        {
            cout << arr[x - 1] << " ";
        }
    }
    cout << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    int tc = 0;
    while (t--)
    {

        cout << "Case " << ++tc << ": ";
        solve();
    }
}
