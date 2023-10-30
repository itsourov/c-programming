#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int offerAvailed = n / 15;
    long long int totalGiven = n * 800;
    int totalGotten = offerAvailed * 200;

    cout << totalGiven - totalGotten << endl;
}