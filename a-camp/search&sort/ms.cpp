#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void merge(int l, int r)
{
}
void sort(int l, int r)
{
    if (l == r)
    {
        return;
    }
    int mid = (l + r) / 2;
    sort(l, mid);
    sort(mid + 1, r);
    merge(l, r);
}
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(0, n - 1);
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
}