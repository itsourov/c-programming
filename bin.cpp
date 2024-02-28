#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl "\n"

void printBin(int n)
{
    for (int i = 15; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
    cout << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    printBin(123);
    printBin(456);
    printBin(123 ^ 456);
    cout << (10 ^ 12) << endl;
}