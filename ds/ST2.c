// how to store string in struct
#include <stdio.h>
struct Student
{
    int id;
    char name[50];
};

int main()
{
    struct Student student;

    printf("Enter the student ID: ");
    scanf("%d", &student.id);

    printf("Enter the student name: ");
    scanf("%s", student.name);

    printf("Student ID: %d\n", student.id);
    printf("Student Name: %s\n", student.name);

    return 0;
}
