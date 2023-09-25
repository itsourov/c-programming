#include <stdio.h>

int hasUniqeDigit(int number)
{
    int digitCount[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    while (number > 0)
    {
        int digit = number % 10;
        number /= 10;
        digitCount[digit]++;

        if (digitCount[digit] > 1)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        int count = 0;
        for (int i = n; i <= m; i++)
        {

            if (hasUniqeDigit(i))
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}