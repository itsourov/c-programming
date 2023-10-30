#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    long long int count = 0;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]--;

        count += n - i - 1 - mp[arr[i]];
    }

    cout << count << endl;
}