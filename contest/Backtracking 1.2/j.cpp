#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'
void solve(int n)
{
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[] = {1, -1, 2, -2, 4, -4, 8, -8, 16, -16, 32, -32, 64, -64, 128, -128, 256, -256, 512, -512, 1024, -1024, 2048, -2048};
    sort(arr, arr + sizeof(arr) / sizeof(arr[0]));
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        cout << arr[i] << " ";
    }

    // int n;
    // while (1)
    // {
    //     cin >> n;
    //     if (n == 0)
    //         break;

    //     solve(n);
    // }
}
