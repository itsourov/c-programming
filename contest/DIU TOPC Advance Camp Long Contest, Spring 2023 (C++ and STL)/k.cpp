#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    unordered_map<int, int> mp;
    vector<int> vt;
    while (cin >> n)
    {
       
        if (mp.find(n) == mp.end())
        {
            mp.insert({n, 1});
            vt.push_back(n);
        }
        else
        {
            mp[n]++;
        }
    }

    for (auto item : vt)
    {
        cout << item << " " << mp[item] << endl;
    }
}
