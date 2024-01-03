#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 10e6;

bool is_prime[N + 1];
vector<int> prime;
vector<int> pp;
bool isPalindrome(int n)
{
    string s = to_string(n);
    string rs = s;
    reverse(rs.begin(), rs.end());
    if (rs == s)
        return true;
    else
        return false;
}

void sieve()
{
    pp.push_back(0);
    prime.push_back(0);
    for (int i = 2; i * i <= N; i++)
    {
        if (is_prime[i] == false)
        {
            for (int j = i * i; j <= N; j += i)
            {
                is_prime[j] = true;
            }
        }
    }

    for (int i = 2; i <= N; i++)
    {
        if (is_prime[i] == false)
        {
            prime.push_back(i);
            cout << i << ",";
            if (isPalindrome(i))
            {
                pp.push_back(i);
            }
        }
    }
}
int prod(int n)
{
    int ans = 1;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 0)
            ans *= digit;
        n /= 10;
    }
    return ans;
}
signed main()
{

    sieve();

    // cout << pp.size() << endl;
    int z;
    cin >> z;
    for (int i = 0; i < z; i++)
    {
        int n;
        cin >> n;

        int m = pp[n];

        printf("%lld %lld\n", m, prime[prod(m)]);
    }
}