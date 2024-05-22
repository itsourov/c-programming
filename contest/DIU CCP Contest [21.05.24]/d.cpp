#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int sumOfDig(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int origin(int n)
{
    while (n > 9)
    {
        n = sumOfDig(n);
    }
    return n;
}
int sumOfOrigin(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += origin(i);
    }
    return sum;
}
void solve()
{
    // for (int i = 1; i <= 50; i++)
    // {
    //     cout << i << " " << sumOfOrigin(i) << endl;
    // }
    int n;
    cin >> n;

    // int temp = n;
    // while (temp / 10)
    // {
    //     int dosThake = temp / 10;
    //     temp = dosThake;
    //     n += dosThake;
    // }
    // cout << n << endl;
    int ans = n / 9;
    ans *= 45;

    n %= 9;
    ans += n * (n + 1) / 2;
    cout << ans << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}