#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    long long int q, query;
    long long int p, energy = 0;
    for (int i = 0; i < t; i++)
    {
        printf("Case %d:\n", i + 1);
        cin >> q;
        for (int j = 0; j < q; j++)
        {
            cin >> query;
            if (query == 1)
            {
                cin >> p;
                energy += p;
            }
            else if (query == 2)
            {
                cin >> p;
                energy -= p;
                if (energy < 0)
                    energy = 0;
            }
            else
            {
                cout << energy << " units of energy\n";
            }
        }
        printf("\n");
    }
}