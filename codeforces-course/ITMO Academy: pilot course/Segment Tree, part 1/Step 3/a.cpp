#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

vector<int> tree;
int operation(int l, int r)
{
    return l + r;
}
int query(int node, int l, int r, int st, int sp)
{
    if (sp < l || st > r)
        return 0;
    if (st >= l && sp <= r)
        return tree[node];
    else
    {
        int lft = (node << 1);
        int rght = lft + 1;
        int mid = st + ((sp - st) >> 1);

        int q1 = query(lft, l, r, st, mid);
        int q2 = query(rght, l, r, mid + 1, sp);

        return operation(q1, q2);
    }
}

void update(int node, int index, int st, int sp, int value)
{
    if (st > index || sp < index)
        return;
    if (st == sp)
    {
        tree[node] = value;
    }
    else
    {
        int lft = (node << 1);
        int rght = lft + 1;
        int mid = st + ((sp - st) >> 1);

        update(lft, index, st, mid, value);
        update(rght, index, mid + 1, sp, value);

        tree[node] = operation(tree[lft], tree[rght]);
    }
}

void solve()
{
    int N;
    cin >> N;

    tree.resize(N * 4);

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        cout << query(1, num + 1, N, 1, N) << " ";
        update(1, num, 1, N, 1);
    }
    cout << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    // cin >> t;
    t = 1;

    while (t--)
    {
        solve();
    }
}