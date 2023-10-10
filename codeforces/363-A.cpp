#include <bits/stdc++.h>
using namespace std;

void printDigit(int digit)
{
    if (digit >= 5)
    {
        cout << "-O|";
        digit -= 5;
    }
    else
    {
        cout << "O-|";
    }
    if (digit == 4)
        cout << "OOOO-";
    else if (digit == 3)
        cout << "OOO-O";
    else if (digit == 2)
        cout << "OO-OO";
    else if (digit == 1)
        cout << "O-OOO";
    else if (digit == 0)
        cout << "-OOOO";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;

    do
    {
        printDigit(n % 10);
        n /= 10;
    } while (n > 0);
}