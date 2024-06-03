#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

vector<string> v1;
vector<string> v2;
int dp[1010][1010];
int rec(int idx1, int idx2)
{
    if (idx1 >= v1.size())
        return 0;
    if (idx2 >= v2.size())
        return 0;

    if (dp[idx1][idx2] != -1)
    {
        return dp[idx1][idx2];
    }
    int ans = 0;
    if (v1[idx1] == v2[idx2])
    {
        ans = rec(idx1 + 1, idx2 + 1) + 1;
    }
    else
    {
        ans = max(ans, rec(idx1 + 1, idx2));
        ans = max(ans, rec(idx1, idx2 + 1));
    }

    return dp[idx1][idx2] = ans;
}
void solve()
{
    string s1, s2;
    int tc = 1;
    while (getline(cin, s1))
    {
        getline(cin, s2);
        cout << setw(2) << setiosflags(ios::right) << tc++ << ". ";

        for (int i = 0; i < s1.size(); i++)
            if (!isupper(s1[i]) && !islower(s1[i]) && !isdigit(s1[i]))
                s1[i] = ' ';
        for (int i = 0; i < s2.size(); i++)
            if (!isupper(s2[i]) && !islower(s2[i]) && !isdigit(s2[i]))
                s2[i] = ' ';

        v1.clear();
        v2.clear();

        istringstream is1(s1);
        istringstream is2(s2);

        string s;
        while (is1 >> s)
            v1.push_back(s);
        while (is2 >> s)
            v2.push_back(s);

        if (v1.size() == 0 || v2.size() == 0)
        {
            cout << "Blank!" << endl;
            continue;
        }
        for (int i = 0; i <= v1.size(); i++)
        {
            for (int j = 0; j < v2.size(); j++)
            {
                dp[i][j] = -1;
            }
        }

        cout << "Length of longest match: " << rec(0, 0) << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}