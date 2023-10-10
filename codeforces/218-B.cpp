#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int freeSeat[m], freeSeat2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> freeSeat[i];
        freeSeat2[i] = freeSeat[i];
    }

    int startIndex = 0;
    int max = 0, min = 0;
    for (int i = 0; i < n; i++)
    {

        sort(freeSeat, freeSeat + m);
        startIndex = 0;
        while (freeSeat[startIndex] == 0)
        {
            startIndex++;
        }

        min += freeSeat[startIndex];
        freeSeat[startIndex]--;
    }

    for (int i = 0; i < n; i++)
    {

        sort(freeSeat2, freeSeat2 + m);

        max += freeSeat2[m - 1];
        freeSeat2[m - 1]--;
    }
    cout << max << " " << min << endl;
}