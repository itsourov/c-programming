#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
int mod = 109546051211;
int bigmod(int a, int b)
{
    if (b == 0)
        return 1 % mod;
    int x = bigmod(a, b / 2);
    x = (x * x) % mod;
    if (b % 2 == 1)
        x = (x * a) % mod;
    return x;
}

int calculate(int n)
{

    int ans = 1;
    int power = n;
    for (int i = 1; i < n; i++)
    {
        ans *= bigmod(i, power);
        power--;
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    cout << calculate(n) << endl;
}