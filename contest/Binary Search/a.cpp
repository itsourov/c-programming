#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, temp;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0;
    int k = 0;
    int final[n + m];
    while (i + j < n + m)
    {
        if (final[k - 1] == a[i])
        {
            i++;
            continue;
        }
        if (final[k - 1] == b[j])
        {
            j++;
            continue;
        }

        if (j == m || (i < n && a[i] < b[j]))
        {
            final[k++] = a[i++];
        }
        else
        {
            final[k++] = b[j++];
        }
    }

    for (int i = 0; i < k; i++)
    {
        if (i == k - 1)
        {
            cout << final[i] << endl;
        }
        else
        {
            cout << final[i] << " ";
        }
    }
}