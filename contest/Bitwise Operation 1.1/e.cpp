#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
void printBin(int n)
{
    for (int i = 15; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
    cout << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> vt;
    for (int i = 1; i < 10; i++)
    {
        int sum = 0;
        sum += (1 << i) - 1;

        int half = i - 1;
        sum = sum << half;
        vt.push_back(sum);
    }

    int ans = 1;
    for (auto item : vt)
    {
        // cout << item << endl;
        if (n % item == 0)
            ans = item;
    }

    cout << ans << endl;
}