#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int count = 0;
    string newString;
    while (!n.empty())
    {
        if (count == 3)
        {
            newString += ',';
            count = 0;
        }

        newString += n.back();
        n.pop_back();
        count++;
    }
    reverse(newString.begin(), newString.end());
    cout << newString << endl;
}