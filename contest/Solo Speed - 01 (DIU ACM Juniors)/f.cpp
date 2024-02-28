#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

string canHaveAtMost22DistinctValues(vector<int> &arr)
{
    unordered_map<int, int> freq;

    // Count the frequency of each element
    for (int num : arr)
    {
        freq[num]++;
        // If any element occurs more than 4 times, return "NO"
        if (freq[num] > 4)
        {
            return "NO";
        }
    }

    // If no element occurs more than 4 times, return "YES"
    return "YES";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        cout << canHaveAtMost22DistinctValues(arr) << endl;
    }

    return 0;
}
