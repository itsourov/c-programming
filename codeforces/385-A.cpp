#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, c;
    cin >> n >> c;

    int arr[n];
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0)
        {
            int profit = arr[i - 1] - arr[i];
            if (profit > maxProfit)
                maxProfit = profit;
        }
    }
    if (maxProfit == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        int bla = maxProfit - c;
        if (bla < 0)
            bla = 0;
        cout << bla << endl;
    }
}