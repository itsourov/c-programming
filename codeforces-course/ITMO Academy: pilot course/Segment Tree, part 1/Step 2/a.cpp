#include <bits/stdc++.h>
using namespace std;

#define int long long

struct Node
{
    int prefixSum;
    int suffixSum;
    int totalSum;
    int maxSum;
};

void build(int l, int r, int index, const vector<int> &arr, vector<Node> &tree)
{
    if (l == r)
    {
        tree[index].prefixSum = arr[l];
        tree[index].suffixSum = arr[l];
        tree[index].totalSum = arr[l];
        tree[index].maxSum = max(0LL, arr[l]);
        return;
    }

    int mid = (l + r) / 2;
    build(l, mid, 2 * index, arr, tree);
    build(mid + 1, r, 2 * index + 1, arr, tree);

    tree[index].prefixSum = max(tree[2 * index].prefixSum, tree[2 * index].totalSum + tree[2 * index + 1].prefixSum);
    tree[index].suffixSum = max(tree[2 * index + 1].suffixSum, tree[2 * index + 1].totalSum + tree[2 * index].suffixSum);
    tree[index].totalSum = tree[2 * index].totalSum + tree[2 * index + 1].totalSum;
    tree[index].maxSum = max({tree[2 * index].maxSum, tree[2 * index + 1].maxSum, tree[2 * index].suffixSum + tree[2 * index + 1].prefixSum});
}

Node query(int l, int r, int index, int ql, int qr, const vector<Node> &tree)
{
    if (ql > r || qr < l)
        return {0, 0, 0, 0};
    if (ql <= l && qr >= r)
        return tree[index];

    int mid = (l + r) / 2;
    Node left = query(l, mid, 2 * index, ql, qr, tree);
    Node right = query(mid + 1, r, 2 * index + 1, ql, qr, tree);

    Node result;
    result.prefixSum = max(left.prefixSum, left.totalSum + right.prefixSum);
    result.suffixSum = max(right.suffixSum, right.totalSum + left.suffixSum);
    result.totalSum = left.totalSum + right.totalSum;
    result.maxSum = max({left.maxSum, right.maxSum, left.suffixSum + right.prefixSum});

    return result;
}

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<Node> tree(4 * n);
    build(0, n - 1, 1, arr, tree);

    cout << max(0LL, query(0, n - 1, 1, 0, n - 1, tree).maxSum) << endl;

    for (int i = 0; i < q; i++)
    {
        int type, pos, newVal;
        cin >> type >> pos >> newVal;
        pos--; // Adjust index to 0-based indexing

        if (type == 1)
        {
            arr[pos] = newVal;
            build(0, n - 1, 1, arr, tree);
        }
        else
        {
            Node result = query(0, n - 1, 1, 0, n - 1, tree);
            cout << max(0LL, result.maxSum) << endl;
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
