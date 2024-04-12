
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int tree[(100000 + 100) * 4];
int lazy[(100000 + 100) * 4];

void update(int index, int l, int r, int us, int ue)
{
    if (lazy[index])
    {
        tree[index] = (r - l + 1) - tree[index];
        if (l != r)
        {
            lazy[index * 2] = !lazy[index * 2];
            lazy[index * 2 + 1] = !lazy[index * 2 + 1];
        }
        lazy[index] = 0;
    }
    if (l > ue || r < us)
    {
        return;
    }
    if (l >= us && r <= ue)
    {
        tree[index] = (r - l + 1) - tree[index];
        if (l != r)
        {
            lazy[index * 2] = !lazy[index * 2];
            lazy[index * 2 + 1] = !lazy[index * 2 + 1];
        }
        return;
    }
    int mid = (l + r) / 2;

    update(index * 2, l, mid, us, ue);
    update(index * 2 + 1, mid + 1, r, us, ue);

    tree[index] = tree[index * 2] + tree[index * 2 + 1];
}
int query(int index, int l, int r, int ss, int se)
{

    if (l > se || r < ss)
    {
        return 0;
    }

    if (lazy[index])
    {
        tree[index] = (r - l + 1) - tree[index];
        if (l != r)
        {
            lazy[index * 2] = !lazy[index * 2];
            lazy[index * 2 + 1] = !lazy[index * 2 + 1];
        }
        lazy[index] = 0;
    }

    if (l >= ss && r <= se)
    {
        return tree[index];
    }

    int mid = (l + r) / 2;
    return query(index * 2, l, mid, ss, se) +
           query(index * 2 + 1, mid + 1, r, ss, se);
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int a, b, c;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        if (a == 1)
        {
            cout << query(1, 1, n, b, c) << endl;
        }
        else
        {
            update(1, 1, n, b, c);
        }
    }
    // cout << "done" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Scenario #" << tc << ":" << endl;
        solve();
        // tc++;
    }
}