#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{

    int data;
    struct node *next;
};
typedef struct node Node;
Node *head = NULL;

void print()
{
    printf("Printing the queue:\n");
    Node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void insertB()
{
    printf("Inserting Node before Head:\n");
    int data;
    Node *lk;
    lk = (Node *)malloc(sizeof(Node));
    printf("Enter the data item:");
    scanf("%d", &data);
    lk->data = data;
    lk->next = head;
    head = lk;
}

void enqueu()
{
    Node *ptr = head;
    if (ptr == NULL)
    {
        insertB();
        return;
    }
    printf("Inserting Node At last position:\n");
    Node *new_node;
    new_node = (Node *)malloc(sizeof(Node));
    int data;
    printf("Enter the data item: ");
    scanf("%d", &data);
    new_node->data = data;
    new_node->next = NULL;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
}

void dequeue()
{
    printf("Deleting first\n");
    head = head->next;
}

int main()
{

    enqueu();
    enqueu();
    enqueu();
    enqueu();
    enqueu();
    print();
    dequeue();
    print();

    return 0;
}