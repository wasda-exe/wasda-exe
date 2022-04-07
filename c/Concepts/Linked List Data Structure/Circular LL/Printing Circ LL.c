#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void print(struct Node *head)
{
    struct Node *a = head;
    // while (a->next != head)
    // {
    //     printf("%d\n", a->data);
    //     a = a->next;
    // }
    // printf("%d\n", a->data);

    do // if the starting position is not ideal, then you can run the loop at least once (simul update)
    {  // print head first, then update.
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

    print(head);

    return 0;
}