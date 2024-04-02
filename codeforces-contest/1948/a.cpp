#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            char j = 'A';
            for (int i = 0; i < n / 2; i++, j++)
            {
                cout << j << j;
            }
            cout << endl;
        }
    }
}