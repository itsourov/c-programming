
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

    return tree[index - 1] = a + b;
}
int search(int l, int r, int index, int tree[], int qs, int qe)
{
    if (l >= qs && r <= qe)
    {
        return tree[index - 1];
    }
    if (l > qe || r < qs)
    {
        return 0;
    }
    int mid = (l + r) / 2;
    int a = search(l, mid, index * 2, tree, qs, qe);
    int b = search(mid + 1, r, (index * 2) + 1, tree, qs, qe);
    return a + b;
}
int update(int l, int r, int index, int k, int u, int tree[])
{
    if (l == r && l == k)
    {
        return tree[index - 1] += u;
    }
    if (r < k || l > k)
    {
        return tree[index - 1];
    }

    int mid = (r + l) / 2;
    int a = update(l, mid, index * 2, k, u, tree);
    int b = update(mid + 1, r, (index * 2) + 1, k, u, tree);
    return tree[index - 1] = a + b;
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
    int tree[n * 4] = {0};
    build(1, n, 1, tree, arr);
    int type;
    int a, b;
    for (int i = 0; i < q; i++)
    {
        cin >> type;
        if (type == 1)
        {
            cin >> a;
            int given = search(1, n, 1, tree, a + 1, a + 1);
            cout << given << endl;
            update(1, n, 1, a + 1, given * (-1), tree);
        }
        else if (type == 2)
        {
            cin >> a >> b;
            update(1, n, 1, a + 1, b, tree);
        }
        else if (type == 3)
        {
            cin >> a >> b;
            cout << search(1, n, 1, tree, a + 1, b + 1) << endl;
        }
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
        cout << "Case " << tc << ":" << endl;
        solve();
        tc++;
    }
}