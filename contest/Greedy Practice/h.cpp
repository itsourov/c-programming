#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int mp[110];
void solve()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int m;
    cin >> m;
    int arrm[m];
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> arrm[i];
    }
    sort(arrm, arrm + m);
    for (int i = 0; i < m; i++)
    {
        int item = arrm[i];
        if (mp[item - 1] > 0)
        {
            count++;
            mp[item - 1]--;
        }
        else if (mp[item] > 0)
        {
            count++;
            mp[item]--;
        }
        else if (mp[item + 1] > 0)
        {
            count++;
            mp[item + 1]--;
        }
    }
    cout << count << endl;
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