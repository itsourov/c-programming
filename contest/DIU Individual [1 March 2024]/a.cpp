#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
string s;
bool isPossible(int mid)
{

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        map<char, int> mp;
        for (int i = 0; i < mid; i++)
        {
            mp[s[i]]++;
        }
        bool hasChar = true;
        for (int i = mid; i < s.size(); i++)
        {

            if (mp[ch] <= 0)
            {
                hasChar = false;
            }

            mp[s[i]]++;
            mp[s[i - mid]]--;
        }
        if (mp[ch] <= 0)
        {
            hasChar = false;
        }
        if (hasChar)
        {
            // cout << ch << "-";
            return true;
        }
    }
    return false;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;

    int l = 1, r = s.size();

    while (l <= r)
    {
        int mid = (l + r) / 2;
        // cout << mid << " " << isPossible(mid) << endl;
        if (isPossible(mid))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        // cout << endl;
    }
    cout << l << endl;
}