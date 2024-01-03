#include <bits/stdc++.h>
using namespace std;

#define int long long
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int count = 1;
        int tempc = 1;
        while (n % 2 == 0)
        {
            tempc++;
            n /= 2;
        }
        count *= tempc;

        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
            {
                int tempCount = 1;
                while (n % i == 0)
                {
                    tempCount++;
                    n /= i;
                }
                count *= tempCount;
            }
        }
        if (n > 1)
        {
            count *= 2;
        }

        cout << count << endl;
    }
}