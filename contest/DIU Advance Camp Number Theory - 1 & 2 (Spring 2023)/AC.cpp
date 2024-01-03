#include <bits/stdc++.h>
using namespace std;

#define int long long
const int mod = 998244353;
int fib(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
    {
        int prev = 1;
        int current = 1;
        int ans = 1;
        for (int i = 2; i <= n; i++)
        {
            ans = current + prev;
            ans %= mod;

            prev = current;

            current = ans;
        }
        return ans;
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    cout << fib(n - 1) << endl;
}