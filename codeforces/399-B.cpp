#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    long long int currentPos = 1, time = 0, input;
    for (int i = 0; i < m; i++)
    {
        cin >> input;
        if (input >= currentPos)
        {
            time += input - currentPos;
            currentPos = input;
        }
        else
        {
            time += n - (currentPos - input);
            currentPos = input;
        }
    }
    cout << time << endl;
}