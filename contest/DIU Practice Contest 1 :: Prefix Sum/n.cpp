#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

const int N = 1000000 + 10;
bool sieve[N + 10];
int ps[N + 10];
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
            ps[i + 1] = ps[i] + 1;
        }
        else
        {
            ps[i + 1] = ps[i];
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
    printf("%lld\n", ps[t2 + 1] - ps[t1]);
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
