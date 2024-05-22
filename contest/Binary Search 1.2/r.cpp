#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

const int N = 1000000 + 10;
bool sieve[N + 10];
vector<int> dprimes;
int sumOfDigits(int n)
{
    int sum = 0;
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
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

    for (int i = 0; i < N; i++)
    {
        if (sieve[i] == false && sieve[sumOfDigits(i)] == false)
        {
            dprimes.push_back(i);
        }
    }
    // for (int i = 0; i < 21; i++)
    // {
    //     cout << i << " " << ps[i] << endl;
    // }
}
void solve()
{
    int t1, t2;
    scanf("%lld %lld", &t1, &t2);
    int ans = upper_bound(dprimes.begin(), dprimes.end(), t2) - lower_bound(dprimes.begin(), dprimes.end(), t1);
    printf("%lld\n", ans);
}
signed main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    prec();
    int t;
    t = 1;
    scanf("%lld", &t);

    while (t--)
    {
        solve();
    }
}
