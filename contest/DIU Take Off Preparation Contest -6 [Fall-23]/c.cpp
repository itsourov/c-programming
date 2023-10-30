#include <bits/stdc++.h>
using namespace std;
long long int factorial(long long int n)
{

    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

// long long int sumToN( long long int n)
// {
//     return n * (n + 1) / 2;
// }
int main()
{
    long long int n;
    cin >> n;

    long long int ans = factorial(n);
    ans++;
    cout << ans << endl;
}