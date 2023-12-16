#include <bits/stdc++.h>
using namespace std;

#define int long long

int bigmod(int a, int b, int mod)
{
    if (b == 0)
        return 1 % mod;
    int x = bigmod(a, b / 2, mod);
    x = (x * x) % mod;
    if (b % 2 == 1)
        x = (x * a) % mod;
    return x;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int power = pow(2, n);
    cout << m % power << endl;
}