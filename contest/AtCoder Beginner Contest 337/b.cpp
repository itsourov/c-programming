#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int len = s.size();
    int i = 0;
    while (i < len && s[i] == 'A')
    {
        i++;
    }

    while (i < len && s[i] == 'B')
    {
        i++;
    }
    while (i < len && s[i] == 'C')
    {
        i++;
    }
    if (i == len)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}