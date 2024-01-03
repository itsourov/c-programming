#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        int num;
        cin >> num;

        if (num == 0)
            break;
        int n = num;

        vector<int> primeFactors;
        if (n < 0)
        {
            primeFactors.push_back(-1);
            n *= -1;
        }

        while (n % 2 == 0)
        {
            primeFactors.push_back(2);
            n /= 2;
        }

        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
            {

                while (n % i == 0)
                {
                    primeFactors.push_back(i);
                    n /= i;
                }
            }
        }
        if (n > 1)
        {
            primeFactors.push_back(n);
        }

        cout << num << " = ";
        int size = primeFactors.size();
        for (int i = 0; i < size; i++)
        {
            if (i == 0)
            {
                cout << primeFactors[i];
            }
            else
            {
                cout << " x " << primeFactors[i];
            }
        }
        cout << endl;
    }
}