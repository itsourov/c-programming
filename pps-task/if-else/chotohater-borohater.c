#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);

    if (a > 40 && a < 91)
    {
        printf("eta boro hater \n");
    }
    else if (a > 60 && a < 123)
    {
        printf("eta choto hater \n");
    }
    else
    {
        printf("invalid char \n");
    }
}