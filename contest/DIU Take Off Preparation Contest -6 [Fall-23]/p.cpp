#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> mp;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mp[a]++;
    }
    int max = 0;

    for (auto item : mp)
    {
        if (item.second > max)
        {
            max = item.second;
        }
    }
    cout << max << endl;
}