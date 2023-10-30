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
    int n, x;
    cin >> n >> x;
    cout << getHcf(n * n, x) << endl;
}