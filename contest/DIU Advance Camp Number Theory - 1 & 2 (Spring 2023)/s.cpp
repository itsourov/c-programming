#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 10e6;
bool isPrime[N + 5];
vector<int> primes;
void sieve()
{
    isPrime[2] = true;
    primes.push_back(2);
    for (int i = 3; i <= N; i += 2)
    {
        isPrime[i] = true;
    }
    for (int i = 3; i * i <= N; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 3; i <= N; i += 2)
    {
        if (isPrime[i])
            primes.push_back(i);
    }
}
void solve(int n)
{

    printf("%lld:\n", n);
    auto r = lower_bound(primes.begin(), primes.end(), n);
    auto l = primes.begin();

    while (r >= l)
    {
        int sum = *r + *l;
        if (sum == n)
        {
            printf("%lld+%lld\n", *l, *r);
            return;
        }
        else
        {
            if (n > sum)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    printf("NO WAY!\n");
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve();

    // cout << primes.back() << endl;
    // return 0;
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        solve(n);
    }
}