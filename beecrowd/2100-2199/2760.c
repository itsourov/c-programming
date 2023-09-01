#include <stdio.h>
#include <string.h>
int main()
{
    char text1[100], text2[100], text3[100];

    fgets(text1, 100, stdin);
    fgets(text2, 100, stdin);
    fgets(text3, 100, stdin);
    text1[strlen(text1) - 1] = '\0';
    text1[strlen(text2) - 1] = '\0';
    text1[strlen(text3) - 1] = '\0';

    printf("%s %s %s\n", text1, text2, text3);
    // printf("%s%s%s\n", text2, text3, text1);
    // printf("%s%s%s\n", text3, text1, text2);
    // printf("%.10s%10s%.10s\n", text1, text2, text3);
}