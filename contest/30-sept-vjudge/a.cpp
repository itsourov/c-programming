#include <bits/stdc++.h>
using namespace std;

int getLedCount(int number)
{
    int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int count = 0, digit;
    while (number > 0)
    {
        digit = number % 10;
        count += arr[digit];
        number /= 10;
    }

    return count;
}

int main()
{

    int n;
    cin >> n;
    int number;
    for (int i = 0; i < n; i++)
    {
        int maxNumber = 1;
        int led;
        cin >> led;
        for (int j = 0; j < maxNumber + 20; j++)
        {
            if (getLedCount(j) <= led)
            {
                maxNumber = j;
            }
        }
        cout << maxNumber << endl;
    }
}