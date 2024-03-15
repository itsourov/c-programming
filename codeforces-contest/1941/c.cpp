#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int findCount(string &s, string key)
{
    string st = s;
    int count = 0;
    auto pos = st.find(key);
    while (pos != string::npos)
    {
        count++;
        pos = st.find(key, pos + 1);
    }
    return count;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mapCount = 0, pieCount = 0, mapieCount = 0;
    mapCount = findCount(s, "map");
    pieCount = findCount(s, "pie");
    mapieCount = findCount(s, "mapie");

    if (mapieCount <= mapCount)
        mapCount -= mapieCount;
    if (mapieCount <= pieCount)
        pieCount -= mapieCount;
    cout << mapCount + pieCount + mapieCount << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}