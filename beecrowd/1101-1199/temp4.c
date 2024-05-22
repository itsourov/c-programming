#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data1;
    double data2;
    struct Node *next;
};

typedef struct Node sourov;
sourov *head = NULL;

void printList(sourov *i)
{
    while (i != NULL)
    {

        printf("%d - ", i->data1);
        printf("%lf \n", i->data2);
        i = i->next;

        // if there is a cycle then break the loop
        if (i == head)
        {
            break;
        }
    }
}
int checkLoop(sourov *i)
{
    while (i != NULL)
    {

        i = i->next;
        if (i == head)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    sourov *n1 = (sourov *)malloc(sizeof(sourov));
    sourov *n2 = (sourov *)malloc(sizeof(sourov));
    sourov *n3 = (sourov *)malloc(sizeof(sourov));

    head = n1;

    n1->data1 = 2;
    n1->data2 = 1.5;
    n1->next = n2;

    n2->data1 = 4;
    n2->data2 = 2.5;
    n2->next = n3;

    n3->data1 = 6;
    n3->data2 = 3.0;
    n3->next = n1;

    if (checkLoop(head))
    {
        printf("Linked list has a cycle\n");
    }
    else
    {
        printf("Linked list does not have a cycle\n");
    }
    printList(head);
    return 0;
}