#include <bits/stdc++.h>
using namespace std;
int minimumDiff(int a, int b)
{
    return a == 0 ? 0 : b - a;
}
int main()
{
    int n;
    cin >> n;

    long long int pressedCound = 0;
    long long int a, b, temp;
    for (long long int i = 0; i < n; i++)
    {
        cin >> a >> b;
        a += pressedCound;
        temp = minimumDiff(a % b, b);
        if (temp == 0)
            temp = b;
        // cout << "temp " << temp << endl;
        pressedCound += temp;
    }

    cout << pressedCound << endl;
}