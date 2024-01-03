#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 100000000;
bool sieve[N + 2];
vector<int> primes;
void solve(int n)
{

    auto r = lower_bound(primes.begin(), primes.end(), n);
    auto l = primes.begin();

    while (r > l)
    {
        int sum = *r + *l;
        if (sum == n)
        {

            printf("%lld is the sum of %lld and %lld.\n", n, *l, *r);

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
    printf("%lld is not the sum of two primes!\n", n);
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    sieve[0] = true;
    sieve[1] = true;
    for (int i = 4; i <= N; i += 2)
    {
        sieve[i] = true;
    }

    primes.push_back(2);

    for (int i = 3; i < N; i += 2)
    {
        if (sieve[i] == false)
        {

            for (int j = i * i; j <= N; j += i)
            {
                sieve[j] = true;
            }
        }
    }
    for (int i = 3; i <= N; i += 2)
    {
        if (sieve[i] == false)
            primes.push_back(i);
    }

    // cout << primes.back() << endl;

    int size = primes.size();

    int number;

    while (cin >> number)
    {

        solve(number);
    }
}