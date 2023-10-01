#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int numberOfStudentBefore = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                numberOfStudentBefore++;
            }
        }
        printf("%d ", numberOfStudentBefore + 1);
    }
    printf("\n");
}
