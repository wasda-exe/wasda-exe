#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// O(1) Time Complexity
struct Node *delFirst(struct Node *head)
{
    // v1 //deallocates head. returns p directly.
    //  struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    //  p = head->next;
    //  free(head);
    //  return p;

    // v2 //conserves head
    // You don't actually need to allocate any memory to ptr for deletion here
    // struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr;
    ptr = head;
    head = head->next;
    // you still need to specify the location where the node will be deleted, after change
    free(ptr);
    return head;
}

void print(struct Node *a)
{
    while (a != NULL)
    {
        printf("%d\n", a->data);
        a = a->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 69;
    head->next = second;

    second->data = 420;
    second->next = third;

    third->data = 1337;
    third->next = fourth;

    fourth->data = 80085;
    fourth->next = NULL;
    printf("Before deletion\n");
    print(head);

    // v1
    //  head = delFirst(head);

    // v2
    head = delFirst(head);
    // head = delFirst(head); // can do it multiple times as well
    printf("After deletion\n");
    print(head);

    // basically, head now also points to second node (head = head->next)
    // print(second);

    // commented out because head has been deallocated
    // print(head);

    return 0;
}