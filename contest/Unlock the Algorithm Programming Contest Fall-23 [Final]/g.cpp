#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int minSum = 10e16;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {

                int currentSum = abs(a[i] - a[j]) + abs(a[j] - a[k]) + abs(a[i] - a[k]);
                cout << currentSum << endl;
            }
        }
    }
}