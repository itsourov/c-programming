#include <bits/stdc++.h>
using namespace std;

bool isComposite(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        int lim = sqrt(n);
        for (int i = 2; i <= lim; i++)
        {
            if (n % i == 0)
            {
                return true;
            }
        }
        return false;
    }
}
int main()
{

    int n;
    cin >> n;

    int n1 = 4;
    while (1)
    {
        if (isComposite(n1) && isComposite(n - n1))
        {
            cout << n1 << " " << n - n1 << endl;
            return 0;
        }
        n1++;

        if (n1 > n)
            break;
    }
}
