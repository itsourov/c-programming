#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (1)
    {
        int a, b, c, d, L;
        cin >> a >> b >> c >> d >> L;

        if (a == 0 && b == 0 && c == 0 && d == 0 && L == 0)
            break;

        int divisableCount = 0;
        for (int x = 0; x <= L; x++)
        {
            int value = a * x * x + b * x + c;
            if (value % d == 0)
                divisableCount++;
        }

        cout << divisableCount << endl;
    }
}