#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int n = s.size();
    vector<int> v(n, 0);
    int r = 0;
    for (int i = 1; i < n; i++)
    {
        int count = 0;
        if (i < r)
        {
            count = r - i;
        }
        else
        {
            while (i + count < n && s[count] == s[i + count])
            {
                count++;
                r = i + count;
            }
        }
        v[i] = count;
    }
    for (auto item : v)
    {
        cout << item << endl;
    }
}