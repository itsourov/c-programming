#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << "Yeee! Argentina" << endl;
            return 0;
        }
        if (arr[i] >= x)
            i++;
    }

    cout << "Messi missed the penalty!" << endl;
}