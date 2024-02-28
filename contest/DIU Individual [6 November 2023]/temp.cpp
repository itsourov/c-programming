#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int temp = n;
    int digitCount = 0;

    while (temp)
    {
        digitCount++;
        temp /= 10;
    }
    int half = digitCount / 2;
    temp = n;
    int temp2 = n;
    int arektaTemp = 10;
    int aroArektaTemp = pow(10, digitCount - 1);
    for (int i = 1; i <= half; i++)
    {
        int lastDigit = temp % arektaTemp;
        lastDigit /= (arektaTemp / 10);
        // cout << lastDigit << endl;
        arektaTemp *= 10;

        int firstDigit = temp2 / aroArektaTemp;

        // cout << firstDigit % 10 << endl;
        int realFirstDigit = firstDigit % 10;

        aroArektaTemp /= 10;

        if (realFirstDigit != lastDigit)
        {
            cout << "Not palindrome" << endl;
            return 0;
        }
    }
    cout << "palindrome" << endl;
}