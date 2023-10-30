#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    scanf("%d %d", &n, &s);

    int totalTime = 0;
    int currentTime = 0;
    vector<pair<int, int>> passengers(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &passengers[i].first, &passengers[i].second);
    }
    sort(passengers.begin(), passengers.end(), greater<pair<int, int>>());
    for (auto passenger : passengers)
    {
        // cout << passenger.first << endl;
        totalTime += s - passenger.first;
        s = passenger.first;

        if (totalTime < passenger.second)
        {
            totalTime += passenger.second - totalTime;
        }
    }
    totalTime += passengers.back().first;
    cout << totalTime << endl;
}