#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

int main()
{
    long long int n, k;
    cin >> n >> k;

    long long int ans = factorial(n) % 998244353;
    cout << ans << endl;
}