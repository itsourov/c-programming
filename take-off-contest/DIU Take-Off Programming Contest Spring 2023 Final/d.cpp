
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int leftGuardPos = min(b, c);
    int rightGuardPos = max(b, c);
    int arr[n];
    int input, moneyLeft = 0, moneyRight = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i + 1 > leftGuardPos && i + 1 <= a)
        {
            moneyLeft += arr[i];
        }
        if (i + 1 < rightGuardPos && i + 1 >= a)
        {
            moneyRight += arr[i];
        }
    }

    cout << max(moneyLeft, moneyRight) << endl;
}