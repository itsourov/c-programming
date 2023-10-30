
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    string input;
    int inputInt;

    for (int i = 0; i < 5; i++)
    {
        cin >> input >> inputInt;

        mp[input] = inputInt;
    }

    int n;
    cin >> n;

    int totalPoint = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        totalPoint += mp[input];
    }

    int xxl = totalPoint / 90;
    cout << "XXL " << xxl << endl;
    totalPoint = totalPoint % 90;

    int xl = totalPoint / 30;
    cout << "XL " << xl << endl;
    totalPoint = totalPoint % 30;

    int l = totalPoint / 10;
    cout << "L " << l << endl;
}