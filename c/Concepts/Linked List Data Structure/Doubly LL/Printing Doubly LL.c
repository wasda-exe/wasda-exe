#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// DIFFERENCE
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *insBeg(struct Node *ptr, int val)
{
    struct Node *ins;
    ins = (struct Node *)malloc(sizeof(struct Node));

    ins->next = ptr;
    ins->data = val;

    return ins;
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

    head->prev = NULL;
    head->data = 69;
    head->next = second;

    second->prev = head;
    second->data = 420;
    second->next = third;

    third->prev = second;
    third->data = 1337;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 80085;
    fourth->next = NULL;

    print(head);

    return 0;
}