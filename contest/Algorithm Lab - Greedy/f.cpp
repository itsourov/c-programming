#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int number, times;
    cin >> number >> times;
    for (int i = 0; i < times; i++)
    {
        if (number % 10 == 0)
        {
            number /= 10;
        }
        else
        {
            number--;
        }
    }
    cout << number << endl;
}