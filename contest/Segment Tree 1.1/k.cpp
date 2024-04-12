#include <bits/stdc++.h>
#include <bitset>
using namespace std;

const int N = 1e4 + 10;
const int sieveMax = 1e6 + 10;

int t, n, q, arr[N], tree[4 * N], lazy[4 * N];
bitset<sieveMax> prime;
int s, e, val;

void sieve()
{
    prime.set();
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i < sieveMax; ++i)
    {
        if (prime[i])
        {
            for (int j = i * i; j < sieveMax; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

void build(int index, int l, int r)
{
    if (l == r)
    {
        tree[index] = prime[arr[l]];
        return;
    }

    int mid = (l + r) / 2;
    build(index * 2, l, mid);
    build(index * 2 + 1, mid + 1, r);
    tree[index] = tree[index * 2] + tree[index * 2 + 1];
}

void propagate(int index, int l, int r)
{
    tree[index] = prime[lazy[index]] * (r - l + 1);
    if (l != r)
    {
        lazy[index * 2] = lazy[index];
        lazy[index * 2 + 1] = lazy[index];
    }

    lazy[index] = 0;
}

void update(int index, int l, int r)
{
    if (lazy[index] != 0)
        propagate(index, l, r);

    if (s > r || e < l)
        return;

    if (r <= e && l >= s)
    {
        lazy[index] = val;
        propagate(index, l, r);
        return;
    }

    int mid = (l + r) / 2;
    update(index * 2, l, mid);
    update(index * 2 + 1, mid + 1, r);
    tree[index] = tree[index * 2] + tree[index * 2 + 1];
}

int query(int index, int l, int r)
{
    if (lazy[index] != 0)
        propagate(index, l, r);

    if (s > r || e < l)
        return 0;

    if (r <= e && l >= s)
        return tree[index];

    int mid = (l + r) / 2;
    return query(index * 2, l, mid) + query(index * 2 + 1, mid + 1, r);
}
void solve()
{
    memset(arr, 0, sizeof(arr));
    memset(tree, 0, sizeof(tree));
    memset(lazy, 0, sizeof(lazy)); // :-(

    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
    }

    build(1, 1, n);

    while (q--)
    {
        int type;
        cin >> type >> s >> e;

        if (type == 0)
        {
            cin >> val;
            update(1, 1, n);
        }
        else
        {
            cout << query(1, 1, n) << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();

    int tc = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case " << tc << ":" << endl;
        solve();
        tc++;
    }

    return 0;
}
