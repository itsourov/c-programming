#include <bits/stdc++.h>
using namespace std;
int sumToN(int n)
{
    return n * (n + 1) / 2;
}
int main()
{

    int n;
    cin >> n;

    int numOfRow = 0;

    while (1)
    {
        int temp = sumToN(numOfRow + 1);
        if (temp <= n)
        {
            numOfRow++;
            n -= temp;
        }
        else
        {
            break;
        }
    }
    cout << numOfRow << endl;
}
