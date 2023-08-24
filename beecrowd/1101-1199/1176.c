#include <stdio.h>
int main()
{
    int testCase, input;
    long long int n1, n2, temp;
    scanf("%d", &testCase);
    for (int index = 0; index < testCase; index++)
    {
        n1 = 0;
        n2 = 1;
        scanf("%d", &input);
        for (int i = 0; i < input; i++)
        {
            temp = n2;
            n2 = n1 + n2;
            n1 = temp;
        }
        printf("Fib(%d) = %lld\n", input, n1);
    }
}