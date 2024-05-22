#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    bool paici = false;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '=')
        {
            paici = true;
            continue;
        }

        if (s1[i] != '.' && paici)
        {
            cout << s1[i] << endl;
            return;
        }
    }

    paici = false;
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '=')
        {
            paici = true;
            continue;
        }
        if (s2[i] != '.' && paici)
        {
            cout << s2[i] << endl;
            return;
        }
    }

    paici = false;
    for (int i = 0; i < s3.size(); i++)
    {
        if (s3[i] == '=')
        {
            paici = true;
            continue;
        }
        if (s3[i] != '.' && paici)
        {
            cout << s3[i] << endl;
            return;
        }
    }
    cout << "You shall pass!!!" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    t = 1;
    // cin >> t;
    int tc = 1;
    while (t--)
    {
        // cout << "Case #" << tc << ": ";
        solve();
        tc++;
    }
}