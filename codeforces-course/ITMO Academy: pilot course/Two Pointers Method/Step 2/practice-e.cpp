#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
const int N = 10e5 + 100;
int mp[N];
int uniqueElementCount = 0;
int s;
void add(int x)
{
    mp[x]++;
    if (mp[x] == 1)
        uniqueElementCount++;
}
void remove(int x)
{
    mp[x]--;
    if (mp[x] == 0)
        uniqueElementCount--;
}
bool good()
{
    return uniqueElementCount <= s;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n >> s;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = 0;
    int ans = 0;
    while (r < n)
    {
        add(arr[r]);

        while (!good())
        {
            remove(arr[l]);
            l++;
        }
        ans += r - l + 1;
        r++;
    }
    cout << ans << endl;
}