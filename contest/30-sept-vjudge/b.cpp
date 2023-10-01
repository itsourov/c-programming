#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, x, a, b;

    for (int index = 0; index < t; index++)
    {
        cin >> n >> x >> a >> b;

        if (a > b)
            swap(a, b);
        while (x--)
        {
            if (a > 1)
                a--;
            else if (b < n)
                b++;
            else
                break;
        }
        cout << b - a << endl;
    }
}