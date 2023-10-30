#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int testCase = 1; testCase <= t; testCase++)
    {
        printf("Case %d:\n", testCase);

        int x1, y1, x2, y2;

        cin >> x1 >> y1 >> x2 >> y2;

        int m;
        cin >> m;
        int x, y;
        for (int i = 0; i < m; i++)
        {
            cin >> x >> y;

            if ((x > min(x1, x2) && x < max(x1, x2)) && (y > min(y1, y2) && y < max(y1, y2)))
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
}