
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        vector<int> arr1(n), arr2(n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr2[i]);
        }
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        if (arr1 == arr2)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}