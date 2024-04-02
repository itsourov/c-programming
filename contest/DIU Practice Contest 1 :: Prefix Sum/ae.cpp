#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
struct operation
{
    int l;
    int r;
    int d;
};

void applyOperation(int arr[], int l, int r, int d)
{
    for (int i = l - 1; i < r; i++)
    {
        arr[i] += d;
    }
}
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    struct operation operations[m];

    for (int i = 0; i < m; i++)
    {
        cin >> operations[i].l;
        cin >> operations[i].r;
        cin >> operations[i].d;
    }
    int x, y;
    for (int i = 0; i < k; i++)
    {
        cin >> x >> y;
        for (int j = x - 1; j < y; j++)
        {
            applyOperation(arr, operations[i].l, operations[i].r, operations[i].d);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}