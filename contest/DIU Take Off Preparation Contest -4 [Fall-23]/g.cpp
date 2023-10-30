#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int testCase = 0; testCase < t; testCase++)
    {
        long long int n, m;
        cin >> n >> m;
        long long int totalLcm;
        long long int power;
        for (int i = 0; i < m; i++)
        {
            cin >> power;
            if (i == 0)
            {
                totalLcm = power;
            }
            else
            {
                totalLcm = lcm(totalLcm, power);
            }
        }
        long long int mitupPoint = n / totalLcm;

        cout << mitupPoint << endl;
    }
}