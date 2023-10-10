#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int totalFinger = 0, finger;
    for (int i = 0; i < n; i++)
    {
        cin >> finger;
        totalFinger += finger;
    }
    n++;

    int count = 0;
    for (int i = 1; i <= 5; i++)
    {
        if ((totalFinger + i) % n != 1)
            count++;
    }

    cout << count << endl;
}