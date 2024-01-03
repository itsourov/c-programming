#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;

    while (cin >> n)
    {

        vector<int> vt(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vt[i];
        }

        int price;
        cin >> price;

        sort(vt.begin(), vt.end());

        auto l = vt.begin();
        auto r = vt.end();
        r--;
        int p1, p2;
        while (l < r)
        {
            int sum = *l + *r;
            if (sum == price)
            {
                p1 = *l;
                p2 = *r;
                l++;
                r--;
            }
            else
            {
                if (price > sum)
                    l++;
                else
                    r--;
            }
        }
        printf("Peter should buy books whose prices are %lld and %lld.\n\n", p1, p2);
    }
}