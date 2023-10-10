#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[m];

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);

    // for (int i = 0; i < m; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int minDiff = 0;
    for (int i = 0; i < m - n + 1; i++)
    {
        if (i == 0 || arr[i + n - 1] - arr[i] < minDiff)
            minDiff = arr[i + n - 1] - arr[i];
    }
    cout << minDiff << endl;
}