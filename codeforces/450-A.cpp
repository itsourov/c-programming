#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n];
    int maxElement, indexOfMax = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        a[i] = ceil((double)a[i] / m);
        if (i == 0 || a[i] >= maxElement)
        {
            maxElement = a[i];
            indexOfMax = i;
        }
    }

    cout << indexOfMax + 1 << endl;
}