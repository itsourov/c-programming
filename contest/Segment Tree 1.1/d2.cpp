
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int mx = 1e5 + 9;
int arr[mx];
int tree[mx * 4];
int build(int l, int r, int index)
{
    if (l == r)
    {
        return tree[index] = arr[r - 1];
    }
    int mid = (l + r) / 2;
    return build(l, mid, index * 2) +
           build(mid + 1, r, (index * 2) + 1);
}
int query(int l, int r, int index, int qs, int qe)
{
    if (l >= qs && r <= qe)
    {
        return tree[index];
    }
    if (l > qe || r < qs)
    {
        return 0;
    }
    int mid = (l + r) / 2;
    return query(l, mid, index * 2, qs, qe) +
           query(mid + 1, r, (index * 2) + 1, qs, qe);
}
int update(int l, int r, int index, int k, int u)
{
}
void solve()
{
    int n, q;
    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    build(1, n, 1);
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case " << tc << ":" << endl;
        solve();
        tc++;
    }
}