#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int testCase = 0; testCase < t; testCase++)
    {
        int m, x;
        cin >> m >> x;

        int ans = m / x;

        ans += ans / 2;

        cout << ans << endl;
    }
}