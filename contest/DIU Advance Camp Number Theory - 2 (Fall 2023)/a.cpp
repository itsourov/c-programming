#include <bits/stdc++.h>
#include <deque>
#define int long long
using namespace std;
vector<int> primes;
const int N = 10e5 + 1;
bool sieve[N + 10];
void genSieve()
{
    sieve[0] = true;
    sieve[1] = true;
    for (int i = 2; i <= N; i++)
    {
        if (sieve[i] == false)
        {
            primes.push_back(i);
            for (int j = i * i; j <= N; j += i)
            {
                sieve[j] = true;
            }
        }
    }
}
signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    genSieve();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n--;
        cout << primes[n] << endl;
    }
}