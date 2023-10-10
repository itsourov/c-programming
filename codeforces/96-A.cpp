#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin >> input;

    int count1 = 0, count0 = 0;
    for (auto c : input)
    {
        if (c == '1')
        {
            count1++;
            count0 = 0;
        }
        else
        {
            count0++;
            count1 = 0;
        }
        if (count0 >= 7 || count1 >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}