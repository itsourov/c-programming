#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp;
    mp[3] = 10;

    if (mp.find(40) != mp.end())
    {
        cout << "found" << endl;
    }

    cout << mp.size() << endl;
}