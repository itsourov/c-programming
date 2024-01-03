#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum << endl;
    int leftIndex = 0;
    int rightIndex = n - 1;
    vector<int> vt;
    bool isReversed = false;
    while (vt.size() != n)
    {
        if (sum % 2 == 0)
        {

            if (!isReversed)
            {
                sum -= arr[leftIndex];
                vt.push_back(arr[leftIndex]);
                leftIndex++;
            }
            else
            {
                sum -= arr[rightIndex];
                vt.push_back(arr[rightIndex]);
                rightIndex--;
            }
        }
        else
        {
            if (!isReversed)
            {
                sum -= arr[rightIndex];
                vt.push_back(arr[rightIndex]);
                rightIndex--;
            }
            else
            {
                sum -= arr[leftIndex];
                vt.push_back(arr[leftIndex]);
                leftIndex++;
            }
            isReversed = !isReversed;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << vt[i] << " ";
    }
    cout << endl;
}