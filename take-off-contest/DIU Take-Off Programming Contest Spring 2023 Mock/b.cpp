#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 21)
        cout << "Sorry, you are too young to vote." << endl;
    else if (n < 23)
        cout << "Wait a little more to vote." << endl;
    else
        cout << "Yes, you can vote." << endl;
}