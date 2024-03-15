#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
vector<int> tree;

int operation(int l, int r)
{
    return l + r;
}

int query(int node, int sum, int st, int sp)
{

    if (st == sp)
        return st;

    int lft = (node << 1);
    int rght = lft + 1;
    int mid = st + ((sp - st) >> 1);

    if (tree[rght] > sum)
    {
        return query(rght, sum, mid + 1, sp);
    }
    else
    {
        return query(lft, sum - tree[rght], st, mid);
    }
}

void build(int node, int st, int sp)
{
    if (st == sp)
    {
        tree[node] = 1;
    }
    else
    {
        int lft = (node << 1);
        int rght = lft + 1;
        int mid = st + ((sp - st) >> 1);

        build(lft, st, mid);
        build(rght, mid + 1, sp);

        tree[node] = operation(tree[lft], tree[rght]);
    }
}

void update(int node, int index, int st, int sp)
{
    if (st > index || sp < index)
        return;
    if (st == sp)
    {
        tree[node] = 0;
    }
    else
    {
        int lft = (node << 1);
        int rght = lft + 1;
        int mid = st + ((sp - st) >> 1);

        update(lft, index, st, mid);
        update(rght, index, mid + 1, sp);

        tree[node] = operation(tree[lft], tree[rght]);
    }
}

void solve()
{

    int N;
    cin >> N;

    tree.resize(N * 4);

    vector<int> v(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> v[i];

    build(1, 1, N);

    vector<int> ans;
    for (int i = N; i > 0; i--)
    {
        int id = query(1, v[i], 1, N);
        update(1, id, 1, N);
        ans.push_back(id);
    }
    reverse(ans.begin(), ans.end());
    for (auto x : ans)
        cout << x << " ";
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