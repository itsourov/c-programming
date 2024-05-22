#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 10000000;
bool sieve[N + 10];
vector<int> primes;
void prec()
{
    sieve[0] = sieve[1] = true;
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
    for (int i = 2; i <= N; i++)
    {
        if (sieve[i] == false && i % 2 == 1 && sieve[i + 2] == true)
        {
            primes.push_back(i);
        }
    }
    // cout << primes.size() << endl;
}
void solve()
{
    int n;
    cin >> n;
    cout << primes[n - 1] + 2 << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    prec();
    int t;
    t = 1;
    cin >> t;
    // int tc = 1;
    while (t--)
    {
        // cout << "Case " << tc << ":" << endl;
        solve();
        // tc++;
    }
}