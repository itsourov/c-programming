#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
int sumOfDigit(int n)
{

    if (n < 10)
    {
        return n;
    }
    return n % 10 + sumOfDigit(n / 10);
}
int f(int n)
{
    if (n < 10)
    {
        return n;
    }
    return f(sumOfDigit(n));
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
        cout << f(n) << endl;
    }
}