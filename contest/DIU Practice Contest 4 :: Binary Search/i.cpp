#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, m, k;
int oneToN(int n)
{
    return n * (n + 1) / 2;
}
bool isPossible(int mid)
{

    int leftDistance = k;
    int leftSum = 0;
    if (mid < leftDistance)
    {
        leftSum = oneToN(mid);
        leftSum += leftDistance - mid;
    }
    else
    {
        leftSum = oneToN(mid);
        leftSum -= oneToN(mid - leftDistance);
    }

    int rightDistance = n - leftDistance;
    mid--;

    int rightSum = 0;
    if (mid < rightDistance)
    {
        rightSum = oneToN(mid);
        rightSum += rightDistance - mid;
    }
    else
    {
        rightSum = oneToN(mid);
        rightSum -= oneToN(mid - rightDistance);
    }

    // cout << mid << " ** " << leftSum << " " << rightSum << endl;
    return leftSum + rightSum <= m;
}
void solve()
{
    cin >> n >> m >> k;
    int l = 0;
    int r = 1;
    while (isPossible(r))
    {
        r *= 2;
    }
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (isPossible(mid))
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << r << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    int tc = 0;

    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
