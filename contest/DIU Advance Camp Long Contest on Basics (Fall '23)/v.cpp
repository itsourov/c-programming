#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        int r, c;
        cin >> r >> c;
        long long int number;
        if (r > c)
        {
            if (r % 2 == 0)
            {
                number = r * r;
                number -= c;
                number++;
            }
            else
            {
                number = (r - 1) * (r - 1);
                number += c;
            }
        }
        else
        {
            if (c % 2 == 0)
            {
                number = (c - 1) * (c - 1);
                number += r;
            }
            else
            {
                number = c * c;
                number -= r;
                number++;
            }
        }

        cout << number << endl;
    }
}
