#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int maxIndex = max_element(numbers.begin(), numbers.end()) - numbers.begin();
    int minIndex = min_element(numbers.begin(), numbers.end()) - numbers.begin();

    int maxDiff = abs(maxIndex - minIndex);

    if (maxIndex < minIndex)
    {
        // cout << "Plus korlam 1 : " << max(maxIndex, n - minIndex) << endl;
        maxDiff += max(maxIndex, n - minIndex - 1);
    }
    else
    {
        // cout << "Plus korlam 2 : " << max(minIndex, n - maxIndex) << endl;
        maxDiff += max(minIndex, n - maxIndex - 1);
    }

    cout << maxDiff << endl;
}