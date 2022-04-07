#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// self-referencing structure
struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
        // linkedListTraversal(ptr); //unblock this to see something fun
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // linked first and second nodes
    head->data = 69;
    head->next = second;

    // linked second and third nodes
    second->data = 420;
    second->next = third;

    // linked third and fourth nodes
    third->data = 1337;
    third->next = fourth;

    // Terminate list at the fourth node
    fourth->data = 80085;
    fourth->next = NULL;

    linkedListTraversal(head);

    return 0;
}