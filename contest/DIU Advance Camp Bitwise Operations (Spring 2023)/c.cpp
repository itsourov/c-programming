#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int countSetBits(int n)
{

    return __builtin_popcount(n);
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    int armies[m + 1];
    for (int i = 0; i <= m; i++)
    {

        cin >> armies[i];
    }

    int fedorArmy = armies[m];
    int friends = 0;

    for (int i = 0; i < m; i++)
    {
        int difference = countSetBits(fedorArmy ^ armies[i]);
        if (difference <= k)
        {
            friends++;
        }
    }

    cout << friends << endl;
}