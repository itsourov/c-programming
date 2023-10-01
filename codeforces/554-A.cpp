#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int len = s.length();
    cout << 26 * (len + 1) - len << endl;
}