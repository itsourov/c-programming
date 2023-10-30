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
        int n, k;
        cin >> n >> k;

        int unVacCount = 0;
        int p;
        for (int i = 0; i < n; i++)
        {
            cin >> p;
            if (p >= k)
            {
                unVacCount += p % k;
            }
            else
            {
                unVacCount += p;
            }
        }

        printf("Case %d: %d\n", testCase, unVacCount);
    }
}