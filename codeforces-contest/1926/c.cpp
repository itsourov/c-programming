#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl "\n"
int sumOfDigit(int n)
{
    int ans = 0;
    while (n > 0)
    {
        int digit = n % 10;
        ans += digit;
        n /= 10;
    }
    return ans;
}
int N = 200000;
int arr[200009];
void precalculate()
{
    for (int i = 1; i <= N; i++)
    {
        arr[i] = sumOfDigit(i) + arr[i - 1];
    }
}
void solve()
{
    int n;
    cin >> n;
    cout << arr[n] << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    precalculate();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}