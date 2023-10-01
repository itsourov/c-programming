#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int unTreatedCrimeCount = 0, police = 0;
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input == -1)
        {
            if (!police)
                unTreatedCrimeCount++;
            else
                police--;
        }
        else
        {
            police += input;
        }
    }
    cout << unTreatedCrimeCount << endl;
}