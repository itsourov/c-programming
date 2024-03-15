#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void solve(int tc)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    int shortCount = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            shortCount++;
        }
        else
        {
            if (shortCount)
            {

                shortCount++;
            }
        }

        if (shortCount == 3)
        {
            count++;
            shortCount = 0;
        }
    }
    if (shortCount)
        count++;
    cout << "Case " << tc << ": ";
    cout << count << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)

    {
        solve(i);
    }
}