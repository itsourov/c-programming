#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;

    int x, y;
    int canDIfit = 1;
    multiset<pair<int, int>> dragons;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        dragons.insert({x, y});
    }
    for (auto dragon : dragons)
    {
        // cout << dragon.first << " - " << dragon.second << endl;
        if (s > dragon.first)
        {
            s += dragon.second;
        }
        else
        {
            canDIfit = 0;
        }
    }
    if (canDIfit)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}