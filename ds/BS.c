// How to binary search on a pre-defined array ?
#include <stdio.h>
int binarySearch(int arr[], int left, int right, int target)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 14, 15, 35, 37, 40, 42, 50, 60, 66, 70, 77, 79, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    scanf("%d", &target);
    int result = binarySearch(arr, 0, n - 1, target);
    if (result == -1)
    {

        printf("Element %d is not present in array\n", target);
    }
    else
    {

        printf("Element %d is present at index %d\n", target, result);
    }
    return 0;
}
