#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<string> one = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    vector<string> teen = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};

    vector<string> Xty = {"", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    if (n == 0)
        cout << "zero" << endl;
    else if (n <= 10)
        cout << one[n - 1] << endl;
    else if (n <= 20)
        cout << teen[n - 11] << endl;
    else if (n % 10 == 0)
        cout << Xty[(n / 10) - 1];
    else
        cout << Xty[(n / 10) - 1] << "-" << one[(n % 10) - 1] << endl;
}