#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *delAtValue(struct Node *head, int element)
{
    struct Node *p = head;
    struct Node *q = head->next;

    // v1 // q will always lead p by 1. Analyse starting and end pos for p and q to understand
    // for (int i = 0; q->data != element; i++)
    // {
    //     p = p->next;
    //     q = q->next;
    // }

    // v2
    while (q->data != element && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    // IMPORTANT: Do Not Delete, unless value is actually found
    if (q->data == element)
    {
        p->next = q->next;
        free(q);
    }

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

    int element = 420;
    head = delAtValue(head, element);

    // element = 1337;
    // head = delAtValue(head, element);

    printf("After deletion\n");
    print(head);

    return 0;
}