#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n;
string s;
vector<int> oggy;
bool isPossible(int mid)
{
    int lineCount = 0;
    int charCount = 0;
    for (auto item : oggy)
    {
        if (item > mid)
        {
            return false;
        }

        charCount += item;
        if (charCount > mid)
        {
            lineCount++;
            charCount = item;
        }
    }
    if (charCount)
        lineCount++;
    return lineCount <= n;
}
void solve()
{

    cin >> n;

    cin.ignore();

    getline(cin, s);

    int charCount = 0;
    for (int i = 0; i < s.size(); i++)
    {
        charCount++;
        if (s[i] == '-' | s[i] == ' ')
        {
            oggy.push_back(charCount);
            charCount = 0;
        }
    }
    if (charCount)
        oggy.push_back(charCount);
    // for (auto item : oggy)
    // {
    //     cout << item << "--" << endl;
    // }

    int l = 0, r = 1;
    // isPossible(4);
    // return;
    while (!isPossible(r))
    {
        r *= 2;
    }
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (isPossible(mid))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    int tc = 0;

    while (t--)
    {

        // cout << "Case " << ++tc << ": ";
        solve();
    }
}
