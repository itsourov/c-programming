#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int soldiers[n];
    int index1 = 0, index2 = 1;
    int minDiff;
    for (int i = 0; i < n; i++)
    {
        cin >> soldiers[i];
        if (i > 0 && abs(soldiers[i] - soldiers[i - 1]) < minDiff)
        {
            minDiff = abs(soldiers[i] - soldiers[i - 1]);
            index1 = i - 1;
            index2 = i;
        }
        if (i == n - 1 && abs(soldiers[i] - soldiers[0]) < minDiff)
        {
            minDiff = abs(soldiers[i] - soldiers[0]);
            index1 = i;
            index2 = 0;
        }
    }
    cout << index1 + 1 << " " << index2 + 1 << endl;
}