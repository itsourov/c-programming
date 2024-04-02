#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> tree;

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
        int lt = (node << 1);
        int rt = lt + 1;
        int mid = st + ((sp - st) >> 1);

        update(lt, index, st, mid, value);
        update(rt, index, mid + 1, sp, value);

        tree[node] = tree[lt] + tree[rt];
    }
}

int query(int node, int l, int r, int st, int sp)
{
    if (st > r || sp < l)
        return 0;
    if (st >= l && sp <= r)
        return tree[node];
    else
    {
        int lt = (node << 1);
        int rt = lt + 1;
        int mid = st + ((sp - st) >> 1);

        int q1 = query(lt, l, r, st, mid);
        int q2 = query(rt, l, r, mid + 1, sp);

        return q1 + q2;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> pos(N * 2 + 1, 0), ans(N + 1);
    tree.assign(N * 8, 0);

    for (int i = 1; i <= 2 * N; i++)
    {
        int num;
        cin >> num;
        if (pos[num] == 0)
        {
            pos[num] = i;
        }
        else
        {
            ans[num] = query(1, pos[num], i, 1, N * 2);
            update(1, pos[num], 1, N * 2, 1);
        }
    }

    for (int i = 1; i <= N; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
