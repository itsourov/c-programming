#include <bits/stdc++.h>
using namespace std;
#define int long long

int mod;

int bigmod(int a, int b)
{
    if (b == 0)
        return 1 % mod;
    int x = bigmod(a, b / 2);
    x = (x * x) % mod;
    if (b % 2 == 1)
        x = (x * a) % mod;
    return x;
}

int digitCount(int n)
{

    int cnt = 0;
    while (n > 0)
    {
        n /= 10;
        cnt++;
    }

    return cnt;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;

    cin >> n;
    int arr[n]; // for storing the base;

    map<int, int> mp; // store <base,expononet>

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mp[arr[i]] += temp;
    }
    cin >> mod;

    int ans = 1;
    bool divCountEven = false;
    double logSum = 0;
    for (auto item : mp)
    {
        ans *= bigmod(item.first, item.second);
        ans %= mod;

        int temp = (item.second + 1);
        logSum += log10(temp);
        if (temp % 2 == 0)
        {
            divCountEven = true;
        }
        else
        {
            if (divCountEven)
            {
                divCountEven = true;
            }
            else
            {
                divCountEven = false;
            }
        }
    }

    cout << ans << endl;
    if (divCountEven)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
    int digits = floor(logSum) + 1;
    cout << (digits) << endl;
}