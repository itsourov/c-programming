#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int isOk = 1;
    long long int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (i < n / 2)
        {
            sum1 += c;
        }
        else
        {
            sum2 += c;
        }
        if (c != '4' && c != '7')
        {
            isOk = 0;
            break;
        }
    }
    if (isOk && sum1 == sum2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
