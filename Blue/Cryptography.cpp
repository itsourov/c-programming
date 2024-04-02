#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

const int N = 1e6;
bool sieve[N + 10];
vector<int> vt;
void prec()
{
    sieve[0] = true;
    sieve[1] = true;
    for (int i = 2; i * i <= N; i++)
    {
        if (sieve[i] == false)
        {
            for (int j = i * i; j <= N; j += i)
            {
                sieve[j] = true;
            }
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (sieve[i] == false)
            vt.push_back(i);
    }
    // cout << vt.size() << endl;
}
void solve()
{
    int n;
    cin >> n;
    n--;
    cout << vt[n] << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    prec();
    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}