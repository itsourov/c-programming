#include <bits/stdc++.h>
using namespace std;
bool customSort(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first < b.first)
    {
        return 1;
    }
    else if (a.first > b.first)
    {
        return 0;
    }
    else
    {
        return a.second > b.second;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        vector<pair<int, int>> vt(n);
        int x, y;
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &x, &y);
            vt[i] = {x, y};
        }
        sort(vt.begin(), vt.end(), customSort);
        for (auto p : vt)
        {
            printf("%d %d\n",p.first,p.second);
       
        }
    }
}