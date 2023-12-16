#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    while (s != t)
    {
        t.pop_back();
        s.erase(s.begin());
    }
    int size = (n - s.size()) * 2;
    size += s.size();

    cout << size << endl;
}