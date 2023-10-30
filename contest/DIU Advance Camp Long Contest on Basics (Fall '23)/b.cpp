#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, p, l;
    scanf("%d", &t);
    for (int testCase = 1; testCase <= t; testCase++)
    {
        scanf("%d %d", &p, &l);

        vector<int> factors;

        int diff = p - l;

        for (int i = max(l, 1); i <= p; i++)
        {
            if (diff % i == 0)
            {
                factors.push_back(i);
            }
        }

        cout << "Case " << testCase << ": ";
        if (factors.empty())
        {
            cout << "impossible" << endl;
        }
        else
        {
            for (auto item : factors)
            {
                cout << item << " ";
            }
            cout << endl;
        }
    }
}