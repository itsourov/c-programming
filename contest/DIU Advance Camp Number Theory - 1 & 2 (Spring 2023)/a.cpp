#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N = 10e5;
    int sieve[N + 2];

    for (int i = 0; i <= N; i++)
    {
        sieve[i] = 1;
    }
    sieve[0] = 0;
    sieve[1] = 0;

    for (int i = 2; i * i <= N; i++)
    {
        if (sieve[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                sieve[j] = 0;
            }
        }
    }
    // for (int i = 1; i <= N; i++)
    // {
    //     cout << i << " " << sieve[i] << endl;
    // }

    int primes[15000 + 1];
    int index = 1;
    for (int i = 2; i <= N; i++)
    {
        if (sieve[i])
        {
            primes[index] = i;
            index++;
            if (index > 15000)
                break;
        }
    }
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int n;
        cin >> n;
        cout << primes[n] << endl;
    }
}