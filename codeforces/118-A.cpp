#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin >> input;

    for (auto c : input)
    {
        c = tolower(c);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
            cout << "." << c;
    }
    cout << endl;
} 