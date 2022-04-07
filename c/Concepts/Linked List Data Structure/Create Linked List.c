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
    // recursive function call, instead
    // printf("%d", ptr->data);
    // ptr = ptr->next;
    // linkedListTraversal(ptr);

    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
        // linkedListTraversal(ptr); //unblock this to see something fun
    }
}

int main()
{
    // fourth node was inserted later.

    // create a set of pointers that are expected to point to a variable of type struct Node
    // these pointers have been declared, but they have not been initialized
    // so they are filled with random values, but these random vals are linked, so no prob
    // also, we still need to allocate memory for each of these nodes
    // having a pointer point to them doesn't grant them permission to exist
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory (dynamically) for nodes in linked list in Heap
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