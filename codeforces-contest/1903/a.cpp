// Halloumi Boxes
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        bool foundDecreasing = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0 && arr[i] < arr[i - 1])
            {
                foundDecreasing = true;
            }
        }
        if (foundDecreasing && k == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}