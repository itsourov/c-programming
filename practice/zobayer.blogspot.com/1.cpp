#include <bits/stdc++.h>
using namespace std;
#define ll long long

void rec(int arr[], int i)
{
    cout << arr[i] << endl;
    rec(arr, i - 1);
    if (i == 0)
    {
        return;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rec(arr, n - 1);
}