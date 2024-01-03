#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int temp;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            sum += temp;
        }
        int root = sqrt(sum);

        if (root * root == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}