#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n;
    cin >> n;
    long long int ans = 0;

    long long int previousOne = 0;
    long long int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (i > 0 && input < previousOne)
        {
            ans += (previousOne - input);
        }

        previousOne = input;
    }

    cout << ans << endl;
}