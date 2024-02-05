#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
void print(int n)
{
    if (n == 0)
        return;
    print(n - 1);
    cout << n << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    print(n);
}