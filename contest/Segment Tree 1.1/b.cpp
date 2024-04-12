
#include <bits/stdc++.h>
using namespace std;
#define int long long
void update(int tree[], int index, int tl, int tr, int l, int r)
{
    if (tl >= l && tr <= r)
    {
        tree[index]++;
        return;
    }
    if (tr < l || tl > r)
    {
        return;
    }
    int mid = (tl + tr) / 2;
    update(tree, index * 2, tl, mid, l, r);
    update(tree, (index * 2) + 1, mid + 1, tr, l, r);
}
int query(int tree[], int index, int tl, int tr, int i)
{

    if (tree[index] != 0)
    {
        if (tl != tr)
        {
            tree[2 * index] += tree[index];
            tree[2 * index + 1] += tree[index];
            tree[index] = 0;
        }
    }
    if (tl == i && tr == i)
    {

        return tree[index];
    }
    if (tr < i || tl > i)
    {
        return 0;
    }

    int mid = (tl + tr) / 2;
    return query(tree, index * 2, tl, mid, i) +
           query(tree, (index * 2) + 1, mid + 1, tr, i);
}
void solve()
{

    string s;
    cin >> s;
    char arr[s.size()];
    for (int i = 0; i < s.size(); i++)
    {
        arr[i] = s[i];
    }
    int tree[s.size() * 4] = {0};

    int q;
    cin >> q;
    char type;
    int l, r, index;
    for (int i = 0; i < q; i++)
    {
        cin >> type;
        if (type == 'I')
        {
            cin >> l >> r;
            update(tree, 1, 1, s.size(), l, r);
        }
        else if (type == 'Q')
        {
            cin >> index;
            bool x = query(tree, 1, 1, s.size(), index) % 2 == 1;
            if (x)
            {
                if (arr[index - 1] == '0')
                {
                    cout << 1 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            else
            {
                cout << arr[index - 1] << endl;
            }
        }
    }
    // cout << endl;
    // for (int i = 0; i < s.size() * 4; i++)
    // {
    //     cout << tree[i] << " ";
    // }
    // cout << endl;
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