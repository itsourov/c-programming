#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i <= 21; i++)
    {

        for (int j = 0; j <= 21; j++)
        {
            for (int k = 0; k <= 21; k++)
            {
                if (i + j + k <= n)
                {
                    cout << i << " " << j << " " << k << endl;
                }
                else
                {
                    break;
                }
            }
        }
    }
}