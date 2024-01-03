#include <bits/stdc++.h>
using namespace std;

#define int long long

int binMultiply(int a, int b, int mod)
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
int bigmod(int a, int b, int mod)
{
    if (b == 0)
        return 1 % mod;
    int x = bigmod(a, b / 2, mod);
    x = binMultiply(x, x, mod);
    if (b % 2 == 1)
        x = binMultiply(x, a, mod);
    return x;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    while (cin >> a >> b >> c)
    {
        cout << bigmod(a, b, c) << endl;
    }
}