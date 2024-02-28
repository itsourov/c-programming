#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int sum = 0;
    int dum;
    for (int i = 0; i < n; i++)
    {
        cin >> dum;
        sum += dum;
    }
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> dum;
        sum2 += dum;
    }

    return 0;
}