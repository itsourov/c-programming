
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int maxN = 50000000 + 10;
bool sieve[maxN + 10];
vector<int> vt;
void prec()
{
    sieve[1] = true;
    sieve[2] = false;

    for (int i = 4; i <= maxN; i += 2)
    {
        sieve[i] = true;
    }

    for (int i = 3; i * i <= maxN; i += 2)
    {
        if (sieve[i] == false)
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                sieve[j] = true;
            }
        }
    }
    vt.push_back(1);
    vt.push_back(2);
    for (int i = 3; i <= maxN; i += 2)
    {
        if (sieve[i] == false)
        {
            vt.push_back(i);
        }
    }
    // cout << vt.size() << endl;
}
void solve()
{
    int n;
    cin >> n;
    cout << vt[n - 1] << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    prec();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}