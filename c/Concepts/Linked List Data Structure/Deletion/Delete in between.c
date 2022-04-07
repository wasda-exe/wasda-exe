#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *delAtIndex(struct Node *head, int index)
{
    struct Node *ptr = head;
    struct Node *p;

    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }
    p = ptr->next;
    ptr->next = p->next;
    free(p);

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

    head = delAtIndex(head, 2);

    printf("After deletion\n");
    print(head);

    return 0;
}