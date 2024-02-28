#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr[] = {10, 9, 8, 11, 6, -2, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 6;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "position  " << i << endl;
            return 0;
        }
    }
    cout << "Not Found!" << endl;
}