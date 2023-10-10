#include <bits/stdc++.h>
using namespace std;

int main()
{
    int index = 0;
    cin >> index;

    for (int i = 0; i < 3; i++)
    {
        int i1, i2;
        cin >> i1 >> i2;

        if (i1 == index)
        {
            index = i2;
        }
        else if (i2 == index)
        {
            index = i1;
        }
    }

    printf("%d\n", index);
}