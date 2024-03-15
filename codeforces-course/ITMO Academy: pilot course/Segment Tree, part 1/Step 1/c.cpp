#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
pair<int, int> build(int l, int r, int index, pair<int, int> tree[], int arr[])
{
    if (l == r)
    {
        tree[index - 1].first = arr[l - 1];
        tree[index - 1].second = 1;
        return tree[index - 1];
    }

    int mid = (r + l) / 2;
    pair<int, int> a = build(l, mid, index * 2, tree, arr);
    pair<int, int> b = build(mid + 1, r, (index * 2) + 1, tree, arr);

    if (a.first == b.first)
    {
        tree[index - 1].first = a.first;
        tree[index - 1].second = a.second + b.second;
    }
    else if (a.first < b.first)
    {
        tree[index - 1].first = a.first;
        tree[index - 1].second = a.second;
    }
    else
    {
        tree[index - 1].first = b.first;
        tree[index - 1].second = b.second;
    }
    return tree[index - 1];
}
pair<int, int> search(int l, int r, int index, pair<int, int> tree[], int qs, int qe)
{
    if (l >= qs && r <= qe)
    {
        return tree[index - 1];
    }
    if (l > qe || r < qs)
    {
        return make_pair(INT_MAX, 1);
    }
    int mid = (l + r) / 2;
    pair<int, int> a = search(l, mid, index * 2, tree, qs, qe);
    pair<int, int> b = search(mid + 1, r, (index * 2) + 1, tree, qs, qe);
    pair<int, int> rt;
    if (a.first == b.first)
    {
        rt.first = a.first;
        rt.second = a.second + b.second;
    }
    else if (a.first < b.first)
    {
        rt.first = a.first;
        rt.second = a.second;
    }
    else
    {
        rt.first = b.first;
        rt.second = b.second;
    }
    return rt;
}
pair<int, int> update(int l, int r, int index, int k, int u, pair<int, int> tree[])
{
    if (l == r && l == k)
    {
        tree[index - 1].first = u;
        return tree[index - 1];
    }
    if (r < k || l > k)
    {
        return tree[index - 1];
    }

    int mid = (r + l) / 2;
    pair<int, int> a = update(l, mid, index * 2, k, u, tree);
    pair<int, int> b = update(mid + 1, r, (index * 2) + 1, k, u, tree);
    if (a.first == b.first)
    {
        tree[index - 1].first = a.first;
        tree[index - 1].second = a.second + b.second;
    }
    else if (a.first < b.first)
    {
        tree[index - 1].first = a.first;
        tree[index - 1].second = a.second;
    }
    else
    {
        tree[index - 1].first = b.first;
        tree[index - 1].second = b.second;
    }
    return tree[index - 1];
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
    pair<int, int> tree[n * 4];

    build(1, n, 1, tree, arr);
    // for (int i = 0; i < n * 4; i++)
    // {
    //     cout << tree[i] << " ";
    // }
    // cout << endl;

    int type, a, b;
    for (int i = 0; i < q; i++)
    {
        cin >> type >> a >> b;
        a++;
        if (type == 2)
        {
            pair<int, int> ss = search(1, n, 1, tree, a, b);
            cout << ss.first << " " << ss.second << endl;
        }

        else
        {
            update(1, n, 1, a, b, tree);
        }
    }
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