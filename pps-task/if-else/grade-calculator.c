#include <stdio.h>
int main()
{
    int a;
    printf("Enter your marks to check the grade: ");
    scanf("%d", &a);

    if (a >= 0 && a <= 100)
    {
        if (a >= 80)
        {
            printf("A+\n");
        }
        else if (a >= 75)
        {
            printf("A\n");
        }
        else if (a >= 70)
        {
            printf("A-\n");
        }
        else if (a >= 65)
        {
            printf("B+\n");
        }
        else if (a >= 60)
        {
            printf("B\n");
        }
        else if (a >= 55)
        {
            printf("B-\n");
        }
        else if (a >= 50)
        {
            printf("C+\n");
        }
        else if (a >= 45)
        {
            printf("C\n");
        }
        else if (a >= 40)
        {
            printf("D\n");
        }
        else
        {
            printf("F");
        }
    }
    else
    {
        printf("Invalid Marks\n");
    }
}