#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int maxInt = 0, maxIntCount = 0, ratio;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[j] % a[i] == 0)
            {
                ratio = b[j] / a[i];
                if (ratio == maxInt)
                {
                    maxIntCount++;
                }
                else if (ratio > maxInt)
                {
                    maxIntCount = 1;
                    maxInt = ratio;
                }
            }
        }
    }
    cout << maxIntCount << endl;
}