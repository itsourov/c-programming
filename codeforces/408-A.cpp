#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int numberOfPeopleInQue[n];

    for (int i = 0; i < n; i++)
        cin >> numberOfPeopleInQue[i];

    int items, totalTIme, min;
    for (int i = 0; i < n; i++)
    {
        totalTIme = 0;

        for (int j = 0; j < numberOfPeopleInQue[i]; j++)
        {
            cin >> items;
            totalTIme += items * 5;
        }
        totalTIme += 15 * numberOfPeopleInQue[i];

        if (i == 0 || totalTIme < min)
        {
            min = totalTIme;
        }
    }
    cout << min << endl;
}