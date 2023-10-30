
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

        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr2[i]);
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n);

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