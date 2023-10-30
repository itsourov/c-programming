#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int testCase = 1; testCase <= t; testCase++)
    {

        int n, p, q;
        cin >> n >> p >> q;
        vector<int> eggs(n);
        for (int i = 0; i < n; i++)
        {
            cin >> eggs[i];
        }
        int boilableEgg = 0;

        int totalGram = 0;
        for (auto egg : eggs)
        {
            totalGram += egg;
            if (totalGram <= q)
            {
                boilableEgg++;
            }

            if (boilableEgg >= p)
            {
                break;
            }
        }

        printf("Case %d: %d\n", testCase, boilableEgg);
    }
}