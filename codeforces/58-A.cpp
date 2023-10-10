#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;

    string word = "hello";
    int searchingIndex = 0;
    for (auto c : input)
    {
        if (c == word[searchingIndex])
            searchingIndex++;
    }
    if (searchingIndex > 4)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}