#include <bits/stdc++.h>
using namespace std;

// #define int long long
bool isPrime(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    while (cin >> s)
    {
        int sum = 0;
        for (auto c : s)
        {

            if (c >= 'a' && c <= 'z')
                sum += (c - 'a') + 1;
            else if (c >= 'A' && c <= 'Z')
                sum += (c - 'A') + 27;
        }
        // cout << sum << endl;
        if (isPrime(sum))
        {

            cout << "It is a prime word.\n";
        }
        else
        {
            cout << "It is not a prime word.\n";
        }
    }
}