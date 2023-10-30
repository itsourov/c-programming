#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int maxdays = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int days = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            days++;
            if (days > maxdays)
                maxdays = days;
        }
        else
        {
            days = 1;
        }
    }
    cout << maxdays << endl;
}
