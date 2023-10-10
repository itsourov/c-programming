#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<pair<int, int>> speeds, rams, hdds, costs;
    int s, r, h, c;

    for (int i = 0; i < n; i++)
    {
        cin >> s >> r >> h >> c;
        speeds.insert({s, i});
        rams.insert({r, i});
        hdds.insert({h, i});
        costs.insert({c, i});
    }

    for (auto cost : costs)
    {
        
    }
}