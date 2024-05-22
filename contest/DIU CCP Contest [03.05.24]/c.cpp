#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m;
    cin >> n >> m;
    int battter[n];
    for (int i = 0; i < n; i++)
    {
        cin >> battter[i];
    }
    int baller[m];
    for (int i = 0; i < m; i++)
    {
        cin >> baller[i];
    }
    if (n < 4 || m < 4 || n + m < 11)
    {
        cout << -1 << endl;
        return;
    }
    sort(battter, battter + n, greater<int>());
    sort(baller, baller + m, greater<int>());
    int totalSkill = 0;
    for (int i = 0; i < 4; i++)
    {

        totalSkill += battter[i];
        totalSkill += baller[i];
        battter[i] = INT_MIN;
        baller[i] = INT_MIN;
    }
    int arr[n + m];
    for (int i = 0; i < n; i++)
    {
        arr[i] = battter[i];
    }
    for (int i = 0; i < m; i++)
    {
        arr[i + n] = baller[i];
    }
    sort(arr, arr + n + m, greater<int>());
    for (int i = 0; i < 3; i++)
    {
        totalSkill += arr[i];
    }
    cout << totalSkill << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}