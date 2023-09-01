#include <stdio.h>
int main()
{
    int testCase, temp, apearedIn, pos;
    scanf("%d", &testCase);
    int arr[testCase];
    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < testCase - 1; i++)
    {
        for (int j = 0; j < testCase - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < testCase; i += apearedIn)
    {
        apearedIn = 0;
        pos = i;

        while (arr[pos] == arr[i])
        {
            apearedIn++;
            pos++;
        }

        printf("%d aparece %d vez(es)\n", arr[i], apearedIn);
    }
}