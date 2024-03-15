#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
// int freq[1000000 + 10];
void solve()
{
    int n, k;
    scanf("%lld %lld", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    map<int, int> mp;
    int count = 0;
    int j = 0;
    int l = 1, r = 1;
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] == 0)
        {
            count++;
        }
        mp[arr[i]]++;
        while (count > k)
        {
            mp[arr[j]]--;
            if (mp[arr[j]] == 0)
            {
                count--;
            }
            j++;
        }
        if (i - j + 1 > maxLen)
        {
            maxLen = i - j + 1;
            l = j + 1;
            r = i + 1;
        }
    }
    printf("%lld %lld", l, r);
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