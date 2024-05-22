#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

#define MOD 1000000009
#define MAX_N 100001
#define MAX_K 21

int seg_tree[MAX_N * 4];
int seq[MAX_N];

void build_tree(int node, int start, int end, int k)
{
    if (start == end)
    {
        seg_tree[node] = seq[start] * 1LL;
        return;
    }
    int mid = (start + end) / 2;
    build_tree(2 * node, start, mid, k);
    build_tree(2 * node + 1, mid + 1, end, k);
    seg_tree[node] = (seg_tree[2 * node] + seg_tree[2 * node + 1]) % MOD;
}

int query(int node, int start, int end, int l, int r, int k)
{
    if (r < start || l > end)
        return 0;
    if (l <= start && r >= end)
        return seg_tree[node];

    int mid = (start + end) / 2;
    int left_sum = query(2 * node, start, mid, l, r, k);
    int right_sum = query(2 * node + 1, mid + 1, end, l, r, k);

    return (left_sum + right_sum) % MOD;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> t;

    while (T--)
    {
        int n;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
            scanf("%d", &seq[i]);

        // Building segment tree for k = 0
        build_tree(1, 1, n, 0);

        int q;
        scanf("%d", &q);

        while (q--)
        {
            int k, a, b;
            scanf("%d %d %d", &k, &a, &b);

            // Query sum of elements raised to the power of k
            int result = query(1, 1, n, a, b, k);
            printf("%lld\n", result);
        }
    }

    return 0;
}
