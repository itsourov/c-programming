#include <stdio.h>
int main()
{

    char one, two, three;
    scanf("%c %c %c", &one, &two, &three);

    printf("A = %c, B = %c, C = %c\n", one, two, three);
    printf("A = %c, B = %c, C = %c\n", two, three, one);
    printf("A = %c, B = %c, C = %c\n", three, one, two);
}