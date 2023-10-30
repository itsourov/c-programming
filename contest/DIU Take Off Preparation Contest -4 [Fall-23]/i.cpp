#include <bits/stdc++.h>
using namespace std;

int getMaxChocolatesCount(int size, int power)
{

    int position = 0;
    int total = 0;
    int isFisrt = 1;
    while (1)
    {
        position += power;
        if (position >= size || power == 0)
        {
            break;
        }
        total += position;
        // printf("increasing %d\n", position);

        if (!isFisrt)
            power--;
        isFisrt = 0;
    }
    return total;
}
int main()
{
    int k, n;
    cin >> k >> n;
    int maxCount = 0;

    for (int i = n; i >= 1; i--)
    {
        int choc = getMaxChocolatesCount(k, i);
        if (choc >= maxCount)
        {
            maxCount = choc;
        }
    }

    cout << maxCount << endl;
}