#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
int sumOfDigits(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;
    int found = 0;
    int ans = 19;
    for (int i = 0; found < k; i++)
    {
        if (sumOfDigits(i) == 10)
        {
            found++;
            ans = i;
            // cout << i << endl;
        }
    }
    cout << ans << endl;
}