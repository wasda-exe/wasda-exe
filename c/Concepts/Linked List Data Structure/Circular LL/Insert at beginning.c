#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insAtHead(struct Node *head, int data)
{

    struct Node *ins = (struct Node *)malloc(sizeof(struct Node));
    ins->data = data;

    ins->next = head;

    struct Node *q = head;
    while (q->next != head)
    {
        q = q->next;
    }
    // At this point q points to last node of circ ll
    // printf("%d", q->data);
    q->next = ins;
    head = ins;
    return head;
}

void print(struct Node *head)
{
    struct Node *a = head;

    do
    { // print head first, then update.
        // before reaching next loop, a is ready to be printed
        printf("%d\n", a->data);
        a = a->next;
    } while (a != head);
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
    fourth->next = head;

    head = insAtHead(head, 808);

    print(head);

    return 0;
}