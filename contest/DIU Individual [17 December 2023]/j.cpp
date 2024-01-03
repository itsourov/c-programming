#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int l;
    cin >> l;

    int sameCount = 0;
    int left = 0, top = 0;

    int x, y;
    for (int i = 0; i < l; i++)
    {
        cin >> x >> y;

        if (x == y)
        {
            sameCount++;
        }
        if (x == 0)
        {
            top++;
        }
        if (y == 0)
        {
            left++;
        }
    }
    cout << max(sameCount, max(left, top)) << endl;
}