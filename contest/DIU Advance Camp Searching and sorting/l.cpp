#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string ans = "A";
    char middle = 'B';

    for (int i = 1; i < n; i++)
    {
        string prev = ans;
        ans += middle;
        ans += prev;
        middle++;
    }

    cout << ans;
}