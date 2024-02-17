// How to store basic student info using struct
#include <stdio.h>

struct Student
{
    int id;
    char grade;
};

int main()
{
    struct Student s1;

    scanf("%d %c", &s1.id, &s1.grade);

    printf("Student ID: %03d\n", s1.id);
    printf("Student Grade: %c\n", s1.grade);

    return 0;
}
