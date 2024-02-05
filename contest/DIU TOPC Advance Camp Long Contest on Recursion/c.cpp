#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
bool possible(int i, const int n)
{
    if (n == i)
        return true;
    if (i > n)
        return false;
    return possible(i * 10, n) || possible(i * 20, n);
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
        if (possible(1, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}