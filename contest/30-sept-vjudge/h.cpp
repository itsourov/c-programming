#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    int digita, digitb;
    int carryCount, tempCarry;
    while (1)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;

        if (b > a)
            swap(a, b);

        carryCount = 0;
        tempCarry = 0;
        while (a > 0)
        {
            digita = a % 10;
            digitb = b % 10;

            if (digita + digitb + tempCarry > 9)
            {
                carryCount++;
                tempCarry = 1;
            }
            else
            {
                tempCarry = 0;
            }
            a /= 10;
            b /= 10;
        }

        if (carryCount == 1)
        {

            cout << carryCount << " carry operation." << endl;
        }
        else if (carryCount > 1)
        {
            cout << carryCount << " carry operations." << endl;
        }
        else
        {

            cout << "No carry operation." << endl;
        }
    }
}