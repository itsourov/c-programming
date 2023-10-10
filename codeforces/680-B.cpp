#include <bits/stdc++.h>
using namespace std;
int isIndexWithinRange(int index, int size)
{
    if (index < 0 || index >= size)
        return 0;
    else
        return 1;
}
int main()
{
    int n, a;
    cin >> n >> a;
    --a;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int toCheck = max(n - a + 1, a + 1);
    int catchCount = 0;
    for (int i = 0; i < toCheck; i++)
    {
        if (i == 0)
        {
            catchCount += arr[a];
        }
        else
        {
            if (isIndexWithinRange(a - i, n) && isIndexWithinRange(a + i, n) && arr[a - i] == 1 && arr[a + i] == 1)
            {

                catchCount += 2;
                // cout << "index1 " << i << endl;
            }
            else if (isIndexWithinRange(a - i, n) && !isIndexWithinRange(a + i, n) && arr[a - i] == 1)
            {
                catchCount++;
                // cout << "index2 " << i << endl;
            }
            else if (!isIndexWithinRange(a - i, n) && isIndexWithinRange(a + i, n) && arr[a + i] == 1)
            {
                catchCount++;
                // cout << "index3 " << i << endl;
            }
        }
    }
    cout << catchCount << endl;
}