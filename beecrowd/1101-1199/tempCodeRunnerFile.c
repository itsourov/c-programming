#include <stdio.h>
int main()
{
    int n;
    char string[50];
    scanf("%d", &n);
    gets(string);
    printf("Number : %d\n", n);
    printf("String : %s\n", string);
}