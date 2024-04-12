
#include <bits/stdc++.h>
using namespace std;
#define int long long

#define endl "\n"
#define size 100009

int tree[4 * size];
int a[size];
int lazy[4 * size];

void update(int a, int b, int i, int j, int node, int val)
{

    if (lazy[node])
    {

        tree[node] += lazy[node] * ((b - a) + 1);

        if (a != b)
        {
            lazy[node * 2] += lazy[node];
            lazy[node * 2 + 1] += lazy[node];
        }

        lazy[node] = 0;
    }

    if (b < i || a > j)
    {
        return;
    }

    if (a >= i and b <= j)
    {
        tree[node] += val * ((b - a) + 1);

        if (a != b)
        {
            lazy[node * 2] += val;
            lazy[node * 2 + 1] += val;
        }

        return;
    }

    int mid = (a + b) / 2;
    update(a, mid, i, j, node * 2, val);
    update(mid + 1, b, i, j, node * 2 + 1, val);

    tree[node] = tree[node * 2] + tree[node * 2 + 1];
    return;
}

int query(int i, int j, int a, int b, int node)
{
    int x;
    int y;

    if (b < a or a > j or b < i)
    {

        return 0;
    }

    if (lazy[node])
    {

        tree[node] += lazy[node] * ((j - i) + 1);
        if (i != j)
        {
            lazy[node * 2] += lazy[node];
            lazy[node * 2 + 1] += lazy[node];
        }

        lazy[node] = 0;
    }

    if (i >= a and j <= b)
    {
        return tree[node];
    }

    x = query(i, (i + j) / 2, a, b, node * 2);
    y = query((i + j) / 2 + 1, j, a, b, node * 2 + 1);

    return x + y;
}

int build(int i, int j, int node)
{

    if (i == j)
    {
        tree[node] = a[i];
        return a[i];
    }

    int mid = (i + j) / 2;
    int a = build(i, mid, node * 2);
    int b = build(mid + 1, j, node * 2 + 1);

    return tree[node] = a + b;
}

void solve()
{
    int n, q;
    cin >> n >> q;

    memset(a, 0, sizeof(a));
    memset(tree, 0, sizeof(tree));
    memset(lazy, 0, sizeof(lazy));

    int type;
    int a, b, c;
    for (int i = 0; i < q; i++)
    {
        cin >> type;
        if (type == 0)
        {
            cin >> a >> b >> c;
            update(0, n - 1, a, b, 1, c);
        }
        else if (type == 1)
        {
            cin >> a >> b;
            cout << query(0, n - 1, a, b, 1) << endl;
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