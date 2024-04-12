
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int build(int l, int r, int index, int tree[], int arr[])
{
    if (l == r)
    {
        tree[index - 1] = arr[l - 1];
        return arr[l - 1];
    }

    int mid = (r + l) / 2;
    int a = build(l, mid, index * 2, tree, arr);
    int b = build(mid + 1, r, (index * 2) + 1, tree, arr);

    return tree[index - 1] = min(a, b);
}
int search(int l, int r, int index, int tree[], int qs, int qe)
{
    if (l >= qs && r <= qe)
    {
        return tree[index - 1];
    }
    if (l > qe || r < qs)
    {
        return INT_MAX;
    }
    int mid = (l + r) / 2;
    int a = search(l, mid, index * 2, tree, qs, qe);
    int b = search(mid + 1, r, (index * 2) + 1, tree, qs, qe);
    return min(a, b);
}
void solve()
{
    int n, q;
    cin >> n >> q;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int tree[n * 4];
    build(1, n, 1, tree, arr);

    int l, r;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;
        cout << search(1, n, 1, tree, l, r) << endl;
    }
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
        cout << "Scenario #" << tc << ":" << endl;
        solve();
        tc++;
    }
}