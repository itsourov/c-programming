#include <bits/stdc++.h>
using namespace std;
#define int long long

int mod;

int binMultiply(int a, int b)
{
    int ans = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans + a) % mod;
        }
        a = (a + a) % mod;
        b >>= 1;
    }
    return ans;
}
int bigmod(int a, int b)
{
    if (b == 0)
        return 1 % mod;
    int x = bigmod(a, b / 2);
    x = binMultiply(x, x);
    if (b % 2 == 1)
        x = binMultiply(x, a);
    return x;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;

    cin >> n;
    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> primeFactorization;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        primeFactorization[a[i]] += b[i];
    }

    cin >> mod;
    int ans = 1;
    double digitCountInNumberOfDivisors = 0.0;
    bool hasEven = false;
    for (auto item : primeFactorization)
    {

        ans *= bigmod(item.first, item.second);
        ans %= mod;

        if ((item.second + 1) % 2 == 0)
            hasEven = true; // multiplication er khetre jekono akta even holei to total output even asbe

        digitCountInNumberOfDivisors += log10(item.second + 1);
    }

    cout << ans << endl;
    if (hasEven)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }

    cout << floor(digitCountInNumberOfDivisors) + 1 << endl;
}