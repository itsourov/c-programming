#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int index = 0; index < n; index++)
    {
        cin >> arr[index];
        sum += arr[index];
    }
    sum = sum / (n / 2);

    int foundCount = 0;
    while (foundCount < n / 2)
    {
        for (i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && arr[i] + arr[j] == sum)
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    arr[i] = 0;
                    arr[j] = 0;
                    foundCount++;
                }
            }
        }
    }
}