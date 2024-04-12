
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

const int maxN = 2000000 + 10;
int sieve[maxN + 10];
int pf[maxN + 10];
vector<pair<int, int>> vt;
void prec()
{
    for (int i = 1; i < maxN; i++)
    {
        sieve[i] = i;
        // cout << i << " " << sieve[i] << endl;
    }

    for (int i = 2; i < maxN; i++)
    {

        if (sieve[i] == i)
        {

            for (int j = i; j < maxN; j += i)
            {
                while (sieve[j] % i == 0)
                {
                    sieve[j] /= i;
                    pf[j]++;
                }
            }
        }
    }

    for (int i = 1; i <= 2000000; i++)
    {
        vt.push_back({pf[i], i});
    }
    sort(vt.begin(), vt.end());
}
void solve()
{
    int n;
    cin >> n;
    cout << vt[n - 1].second << endl;
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