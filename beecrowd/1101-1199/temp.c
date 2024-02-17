#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;

void printLinkedList(node *head)
{
    while (head != NULL)
    {
        printf("value = %d\n", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    node *node1 = NULL;
    node *node2 = NULL;
    node *node3 = NULL;

    node1 = (node *)malloc(sizeof(node));
    node2 = (node *)malloc(sizeof(node));
    node3 = (node *)malloc(sizeof(node));

    node1->data = 1;
    node1->next = node2;

    node2->data = 2;
    node2->next = node3;

    node3->data = 3;
    node3->next = NULL;

    printLinkedList(node1);

    node *node4 = (node *)malloc(sizeof(node));
    node4->data = 4;
    node4->next = NULL;
    node3->next = node4;

    printLinkedList(node1);
    return 0;
}
