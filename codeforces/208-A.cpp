#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin >> input;

    int len = input.size();
    int hasPrinted = 0, isFirstLetter = 1;
    for (int i = 0; i < len; i++)
    {
        if (input[i] == 'W' && input[i + 1] == 'U' && input[i + 2] == 'B' && i + 2 < len)
        {
            i += 2;
            isFirstLetter = 1;
        }
        else
        {
            if (hasPrinted && isFirstLetter)
            {
                cout << " ";
            }
            cout << input[i];
            hasPrinted = 1;
            isFirstLetter = 0;
        }
    }
    cout << endl;
}