// how to copy one struct to another struct
#include <stdio.h>
struct Student
{
    int id;
    char name[50];
};

int main()
{
    struct Student s1;

    scanf("%d", &s1.id);
    scanf("%s", s1.name);

    struct Student s2 = s1;

    printf("Student ID: %d\n", s2.id);
    printf("Student Name: %s\n", s2.name);

    return 0;
}
