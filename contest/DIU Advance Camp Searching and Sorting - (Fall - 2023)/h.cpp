#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int sumOfDigits(int n)
{
    int sum = 0;

    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void solve()
{
    int arr[10010];
    int index = 1;
    for (int i = 1; i < 10800110; i++)
    {
        if (sumOfDigits(i) == 10)
        {
            arr[index++] = i;
        }
    }
    int x;
    cin >> x;
    cout << arr[x] << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}