#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    int maxNum = max(x1, x2);
    maxNum = max(maxNum, x3);
    maxNum = max(maxNum, x4);

    if (maxNum - x1 != 0)
    {
        cout << maxNum - x1 << " ";
    }
    if (maxNum - x2 != 0)
    {
        cout << maxNum - x2 << " ";
    }
    if (maxNum - x3 != 0)
    {
        cout << maxNum - x3 << " ";
    }
    if (maxNum - x4 != 0)
    {
        cout << maxNum - x4 << endl;
    }

    return 0;
}