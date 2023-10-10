#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mShots;
    cin >> mShots;

    int xWire, yIndex;
    int onRight, onLeft;
    for (int i = 0; i < mShots; i++)
    {
        cin >> xWire >> yIndex;

        onRight = a[xWire - 1] - yIndex;
        onLeft = yIndex - 1;

        if (xWire > 1)
        {
            a[xWire - 2] += onLeft;
        }

        if (xWire < n)
        {
            a[xWire] += onRight;
        }

        a[xWire - 1] -= onLeft;
        a[xWire - 1] -= onRight;
        a[xWire - 1]--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\n";
    }
}