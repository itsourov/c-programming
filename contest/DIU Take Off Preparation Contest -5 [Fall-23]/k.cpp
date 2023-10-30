#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h;
    cin >> n;

    int max = 0;

    int first, last;
    for (int i = 1; i <= n; i++)
    {
        cin >> h;

        if (i == 1)
        {
            first = h;
        }
        if (i == n)
        {
            last = h;
        }
        if (h > max)
        {
            max = h;
        }
    }

    // printf("last: %d\n", last);
    // printf("max: %d\n", max);
    int q, stamina;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> stamina;
        if (stamina + first >= max)
        {
            printf("Homecoming\n");
        }
        else
        {
            printf("No way Home\n");
        }
    }
}