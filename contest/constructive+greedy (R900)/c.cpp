#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        if (mp.size() == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int max = arr[0];
            int maxPos = 1;
            for (int i = 1; i < n; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                    maxPos = i + 1;
                }
            }
            cout << maxPos << endl;
        }
    }
}