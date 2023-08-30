#include <stdio.h>
int main()
{

    char a;

    scanf("%c", &a);

    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'z'))
    {
        if (a == 'a' || a == 'e')
        {
            printf("vowel");
        }
    }
    else
    {
        printf("not letter\n");
    }
}