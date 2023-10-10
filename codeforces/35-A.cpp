#include <bits/stdc++.h>
using namespace std;

int main()
{
    int index;
    cin >> index;
    int swapIndexOne, swapIndexTwo;
    for (int i = 0; i < 3; i++)
    {

        cin >> swapIndexOne >> swapIndexTwo;

        if (swapIndexOne == index)
        {
            index = swapIndexTwo;
        }
        else if (swapIndexTwo == index)
        {
            index = swapIndexOne;
        }
    }

    cout << index << endl;
}