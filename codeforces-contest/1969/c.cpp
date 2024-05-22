#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        long long minSum = LLONG_MAX;
        for (int i = 0; i < n; ++i)
        {
            vector<int> b = a;
            for (int j = max(0, i - k); j <= min(n - 1, i + k); ++j)
            {
                b[j] = min(b[j], a[i]);
            }
            long long sum = 0;
            for (int num : b)
            {
                sum += num;
            }
            minSum = min(minSum, sum);
        }
        cout << minSum << endl;
    }
    return 0;
}
