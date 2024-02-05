#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";
int calculate(int s, const int e)
{
    if (s == e)
        return 1;
    if (s > e)
        return 0;
    return calculate(s + 1, e) + calculate(s + 2, e) + calculate(s + 3, e);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int s, e;
    cin >> s >> e;

    cout << calculate(s, e) << endl;
}