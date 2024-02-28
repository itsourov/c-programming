#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void printBin(int n)
{
    for (int i = 15; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
    cout << endl;
}

void solve()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 1; i < (1 << n); i++)
    {

        if (__builtin_popcount(i) >= 2)
        {

            int sum = 0;
            int minEl = INT_MAX;
            int maxEl = INT_MIN;
            for (int j = 0; j < n; j++)
            {
                if ((i >> j) & 1)
                {

                    sum += arr[j];
                    minEl = min(minEl, arr[j]);
                    maxEl = max(maxEl, arr[j]);
                }
            }
            if (sum >= l && sum <= r && maxEl - minEl >= x)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
}