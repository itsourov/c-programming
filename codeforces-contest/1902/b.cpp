#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, p, l, taskPoints;
    cin >> n >> p >> l >> taskPoints;

    int maxRestDays = 0;

    for (int day = 1; day <= n; day += 7)
    {
        int lessonPoints = day * l;
        int totalPoints = lessonPoints;

        for (int i = day; i <= min(day + 6, n); ++i)
        {
            totalPoints += taskPoints;
        }

        if (totalPoints >= p)
        {
            break;
        }

        maxRestDays += 7;
    }

    cout << maxRestDays << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}