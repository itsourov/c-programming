#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    map<char, int> mp;
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];

        for (char i = 'a'; i <= 'z'; i++)
        {
            if (mp[i] == arr[j])
            {
                cout << i;
                mp[i]++;
                break;
            }
        }
    }
    cout << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}