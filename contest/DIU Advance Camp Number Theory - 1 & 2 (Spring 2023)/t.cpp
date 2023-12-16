#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;

        int store = n;

        int count = 0;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
                while (n % i == 0)
                {
                    n /= i;
                }
            }
        }
        if (n > 1)
            count++;
        cout << store << " : " << count << endl;
    }
}