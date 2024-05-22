#include <bits/stdc++.h>
using namespace std;

const int N = 2e6 + 10;
vector<bool> IsPrime(N, 1);
vector<int> isPrime(N, 0);

void Prime()
{
    int prime[N];
    for (int i = 4; i <= N; i += 2)
        prime[i] = 2;
}
int main()
{
    Prime();

    int t, n;
    cin >> t;
    vector<int> index(t);
    for (int i = 0; i < t; i++)
    {
        cin >> index[i];
    }

    vector<pair<int, int>> number;
    for (int i = 1; i <= 2000000; ++i)
    {
        number.push_back({isPrime[i], i});
    }

    sort(number.begin(), number.end());

    for (int i = 0; i < t; ++i)
    {

        cout << number[index[i] - 1].second << endl;
    }
}