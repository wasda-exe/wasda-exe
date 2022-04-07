#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// O(n) Time Complexity
struct Node *delAtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;

    // while ((p->next)->next != NULL) // CrinGW
    // because q will always lead p by 1. Analyse starting and end pos for p and q to understand
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);

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

    head = delAtEnd(head);

    printf("After deletion\n");
    print(head);

    return 0;
}