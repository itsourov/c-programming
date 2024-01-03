#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

vector<pair<int, int>> p;
int n, k;

bool good(int x)
{
    int c = 0;
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i].first > x)
            c += 0;
        else if (p[i].second < x)
            c += (p[i].second - p[i].first + 1);
        else
            c += x - p[i].first;
    }
    return c <= k;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    p.resize(n);
    int l = INT_MAX, r = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
        l = l > p[i].first ? p[i].first : l;
        r = r > p[i].second ? r : p[i].second;
    }
    l = INT_MIN;
    r = INT_MAX;
    for (int i = 0; i < 60; i++)
    {
        int mid = (l + r) / 2;
        if (good(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << endl;
}