#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void printDigit(int n)
{
    if (n < 10)
    {
        cout << n << " ";
        return;
    }

    printDigit(n / 10);
    cout << n % 10 << " ";
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        printDigit(n);
        cout << endl;
    }
}