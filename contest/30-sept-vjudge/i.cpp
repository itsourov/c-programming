#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k;
    int n, m;
    int x, y;
    while (1)
    {
        cin >> k;

        if (k == 0)
            break;

        cin >> n >> m;
        for (int index = 0; index < k; index++)
        {
            cin >> x >> y;
            if (x == n || y == m)
                cout << "divisa\n";
            else if (x > n && y > m)
                cout << "NE\n";

            else if (x < n && y > m)
                cout << "NO\n";

            else if (x < n && y < m)
                cout << "SO\n";
            else
                cout << "SE\n";
        }
    }
}