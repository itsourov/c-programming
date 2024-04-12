#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAX_N = 100005;

int tree[4 * MAX_N];

int query(int node, int kth, int st, int sp)
{
    if (st == sp)
        return st;

    int lft = (node * 2);
    int rght = lft + 1;
    int mid = st + ((sp - st) / 2);

    if (tree[lft] >= kth)
        return query(lft, kth, st, mid);
    else
        return query(rght, kth - tree[lft], mid + 1, sp);
}

void update(int node, int index, int st, int sp)
{
    if (st > index || sp < index)
        return;

    if (st == sp)
    {
        tree[node] ^= 1;
    }
    else
    {
        int lft = (node * 2);
        int rght = lft + 1;
        int mid = st + ((sp - st) / 2);

        update(lft, index, st, mid);
        update(rght, index, mid + 1, sp);

        tree[node] = tree[lft] + tree[rght];
    }
}

void build(int v[], int node, int st, int sp)
{
    if (st == sp)
    {
        tree[node] = v[st];
    }
    else
    {
        int lft = (node * 2);
        int rght = lft + 1;
        int mid = st + ((sp - st) / 2);

        build(v, lft, st, mid);
        build(v, rght, mid + 1, sp);

        tree[node] = tree[lft] + tree[rght];
    }
}

void solve()
{

    int N, M;
    cin >> N >> M;

    int v[MAX_N];
    for (int i = 0; i < N; ++i)
        cin >> v[i];

    while (__builtin_popcount(N) != 1)
    {
        N++;
        v[N - 1] = 0;
    }

    build(v, 1, 0, N - 1);

    for (int i = 0; i < M; i++)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            int index;
            cin >> index;
            update(1, index, 0, N - 1);
        }
        else if (x == 2)
        {
            int kth;
            cin >> kth;
            cout << query(1, kth + 1, 0, N - 1) << "\n";
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
