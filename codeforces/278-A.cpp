#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int d[n];
    int totalDistance = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
        totalDistance += d[i];
    }
    int s, t;
    cin >> s >> t;
    int distance = 0;
    if (s > t)
        swap(s, t);
    for (int i = s - 1; i <= t - 2; i++)
    {
        distance += d[i];
    }

    if (totalDistance - distance > distance)
    {

        cout << distance << endl;
    }
    else
    {
        cout << totalDistance - distance << endl;
    }
}