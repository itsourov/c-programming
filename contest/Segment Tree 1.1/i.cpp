#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int arr[(100000 + 100)];
int tree[(100000 + 100) * 4];
int lazyset[(100000 + 100) * 4];
int lazyUpdate[(100000 + 100) * 4];

int build(int index, int l, int r)
{
    if (l == r)
    {
        lazyset[index] = 0;
        lazyUpdate[index] = 0;
        return tree[index] = arr[l] * arr[l];
    }
    int mid = (l + r) / 2;
    int a = build(index * 2, l, mid);
    int b = build(index * 2 + 1, mid + 1, r);
    return tree[index] = a + b;
}

void propagate(int index, int l, int r)
{
    if (lazyset[index] != 0)
    {
        tree[index] = (r - l + 1) * lazyset[index] * lazyset[index];
        if (l != r)
        {
            lazyset[index * 2] = lazyset[index];
            lazyset[index * 2 + 1] = lazyset[index];
            lazyUpdate[index * 2] = 0;
            lazyUpdate[index * 2 + 1] = 0;
        }
        lazyset[index] = 0;
    }
    if (lazyUpdate[index] != 0)
    {
        tree[index] += (r - l + 1) * lazyUpdate[index] * lazyUpdate[index] + 2 * lazyUpdate[index] * (tree[index] / (r - l + 1));
        if (l != r)
        {
            lazyUpdate[index * 2] += lazyUpdate[index];
            lazyUpdate[index * 2 + 1] += lazyUpdate[index];
        }
        lazyUpdate[index] = 0;
    }
}

void setLazy(int index, int l, int r, int us, int ue, int x)
{
    propagate(index, l, r);
    if (l > ue || r < us)
    {
        return;
    }

    if (l >= us && r <= ue)
    {
        tree[index] = (r - l + 1) * x * x;
        if (r != l)
        {
            lazyset[index * 2] = x;
            lazyset[index * 2 + 1] = x;
            lazyUpdate[index * 2] = 0;
            lazyUpdate[index * 2 + 1] = 0;
        }
        return;
    }
    int mid = (l + r) / 2;
    setLazy(index * 2, l, mid, us, ue, x);
    setLazy(index * 2 + 1, mid + 1, r, us, ue, x);
    tree[index] = tree[index * 2] + tree[index * 2 + 1];
}

void updateLazy(int index, int l, int r, int us, int ue, int x)
{
    propagate(index, l, r);
    if (l > ue || r < us)
    {
        return;
    }
    if (l >= us && r <= ue)
    {
        tree[index] += (r - l + 1) * x * x + 2 * x * (tree[index] / (r - l + 1));
        if (l != r)
        {
            lazyUpdate[index * 2] += x;
            lazyUpdate[index * 2 + 1] += x;
            lazyset[index * 2] = 0;
            lazyset[index * 2 + 1] = 0;
        }
        return;
    }
    int mid = (l + r) / 2;
    updateLazy(index * 2, l, mid, us, ue, x);
    updateLazy(index * 2 + 1, mid + 1, r, us, ue, x);
    tree[index] = tree[index * 2] + tree[index * 2 + 1];
}

int query(int index, int l, int r, int qs, int qe)
{
    propagate(index, l, r);
    if (l > qe || r < qs)
        return 0;
    if (l >= qs && r <= qe)
        return tree[index];
    int mid = (l + r) / 2;
    return query(index * 2, l, mid, qs, qe) + query(index * 2 + 1, mid + 1, r, qs, qe);
}

void solve()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    build(1, 1, n);
    int type;
    int a, b, c;
    for (int i = 0; i < q; i++)
    {
        cin >> type;
        if (type == 0)
        {
            cin >> a >> b >> c;
            setLazy(1, 1, n, a, b, c);
        }
        else if (type == 1)
        {
            cin >> a >> b >> c;
            updateLazy(1, 1, n, a, b, c);
        }
        else if (type == 2)
        {
            cin >> a >> b;
            cout << query(1, 1, n, a, b) << endl;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case " << tc << ":" << endl;
        solve();
        tc++;
    }
    return 0;
}
