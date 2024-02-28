#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void printBin(int n)
{
    for (int i = 15; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
    cout << endl;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int ans;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            ans = arr[i];
        }
        else
        {
            ans = ans & arr[i];
        }
    }

    cout << ans << endl;
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