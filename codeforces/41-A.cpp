#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input1, input2;
    cin >> input1 >> input2;

    reverse(input1.begin(), input1.end());
    input1 == input2 ? cout << "YES" << endl : cout << "NO" << endl;
}