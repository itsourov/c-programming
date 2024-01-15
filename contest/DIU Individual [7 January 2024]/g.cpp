#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    char c;
    double x, y, prevX, prevY;
    while (1)
    {
        scanf("%c", &c);
        if (c == '(')
            break;
    }
    scanf("%lf, %lf", &prevX, &prevY);
    double ans = 0.0;
    while (scanf("%c", &c) != EOF)
    {

        if (c == '(')
        {
            scanf("%lf, %lf", &x, &y);
            // cout << prevX << " " << prevY << endl;
            // cout << x << " " << y << endl;

            ans += sqrt((x - prevX) * (x - prevX) + (y - prevY) * (y - prevY));
            prevX = x;
            prevY = y;
            printf("The salesman has traveled a total of %.3lf kilometers.\n", ans);
        }
    }
}