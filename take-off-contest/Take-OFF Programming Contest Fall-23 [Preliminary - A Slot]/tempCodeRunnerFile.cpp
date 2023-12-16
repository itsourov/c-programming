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
    int arr[n];
    int temp;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mp[arr[i]] += temp;
    }
    cin >> mod;

    int ans = 1;
    int divCount = 1;
    for (auto item : mp)
    {
        ans *= bigmod(item.first, item.second);
        ans %= mod;

        divCount *= (item.second + 1);
        divCount %= mod;
    }

    cout << ans << endl;
    if (divCount % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
    cout << digitCount(divCount) << endl;
}