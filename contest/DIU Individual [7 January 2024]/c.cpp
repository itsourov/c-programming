#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b;
    cin >> n >> a >> b;

    unordered_map<int, int> exist;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        exist[arr[i]] = i + 1;
    }

    map<int, int> ans;
    bool isOk = true;
    for (int i = 0; i < n; i++)
    {
        if (!ans[i])
        {
            if (exist[a - arr[i]])
            {

                ans[i] = 2;
                ans[exist[a - arr[i]] - 1] = 2;
            }
            else if (exist[b - arr[i]])
            {

                ans[i] = 1;
                ans[exist[b - arr[i]] - 1] = 1;
            }
            else
            {
                isOk = false;
            }
        }
    }

    if (isOk)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            if (ans[i] == 2)
            {
                ans[i] = 0;
            }
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}