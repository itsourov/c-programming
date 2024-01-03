#include <bits/stdc++.h>
using namespace std;

#define int long long
int phi(int n)
{
    int result = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        int n;
        cin >> n;

        if (n == 0)
            break;
        if (n <= 1)
            cout << 0 << endl;
        else
            cout << phi(n) << endl;
    }
}