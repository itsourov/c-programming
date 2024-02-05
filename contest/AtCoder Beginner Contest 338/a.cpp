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
    if (s[0] >= 'A' && s[0] <= 'Z')
    {
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
            }
            else
            {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}