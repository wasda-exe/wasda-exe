#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insAtInd(struct Node *head, int val, int index)
{

    struct Node *p;
    struct Node *ins = (struct Node *)malloc(sizeof(struct Node));
    p = head;

    // come one step ahead of where the index is meant to be
    for (int i = 0; i != index - 1; i++)
    {
        p = p->next;
    }
    ins->next = p->next;
    p->next = ins;

    ins->data = val;
    // return head, don't return ins, else retarded
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
    print(head);
    // head = insAtInd(head, 42, 1);
    // doesn't work for index n = 0
    print(insAtInd(head, 42, 1));

    // print(head);

    return 0;
}