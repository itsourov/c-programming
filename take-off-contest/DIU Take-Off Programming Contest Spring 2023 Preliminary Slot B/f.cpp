#include <bits/stdc++.h>
using namespace std;

int getHcf(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    if (a > b)
    {
        return getHcf(a % b, b);
    }
    else
    {
        return getHcf(a, b % a);
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxWays = 0, hcf;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                int hcf = getHcf(arr[i], arr[j]);
                if (hcf > maxWays)
                    maxWays = hcf;
            }
        }
    }

    cout << maxWays << endl;
}