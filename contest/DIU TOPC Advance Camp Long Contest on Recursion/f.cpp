#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    cout << fib(n - 1) << endl;
}