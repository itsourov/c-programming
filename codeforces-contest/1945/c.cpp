#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int upperHalf(int x)
{

    if (x == 0)
        return 0;
    if (x % 2 != 0)
    {
        x++;
    }
    return x / 2;
}
void solve()
{
    int n;
    cin >> n;
    char arr[n];
    int zero[n + 10];
    int one[n + 10];
    zero[0] = 0;
    one[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i - 1];

        if (arr[i - 1] == '0')
        {
            zero[i] = zero[i - 1] + 1;
            one[i] = one[i - 1];
        }
        else
        {
            zero[i] = zero[i - 1];
            one[i] = one[i - 1] + 1;
        }
    }

    int l = 0;
    int ans = n;
    int minimize = INT_MAX;
    while (l < n)
    {

        int satisfiedRight = one[n] - one[l];
        int peopleRight = n - l;

        int satisfiedLeft = zero[l];
        int peopleLeft = l;

        if (satisfiedLeft >= upperHalf(peopleLeft) && satisfiedRight >= upperHalf(peopleRight))
        {
            // cout << l << endl;
            // return;

            int mm = abs((n / 2.0) - l);
            if (mm < minimize)
            {
                // cout << l << " " << mm << endl;
                ans = l;
                minimize = mm;
            }
        }
        l++;
    }
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
}