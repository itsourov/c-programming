#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int dayCount = 0;
    for (int i = 1867; i < n + 1867; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 100 == 0 && i % 400 == 0))
        {
            dayCount += 366;
        }
        else
        {
            dayCount += 365;
        }
    }

    char days[7][15] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << days[dayCount % 7] << endl;
  
}