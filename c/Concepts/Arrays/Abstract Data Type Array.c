#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct myArray
{

    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tSize, int uSize)
{
    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // (*a).ptr = (int *)malloc(tSize * sizeof(int));

    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void setVal(struct myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        // key syntax usage. provide pointer to first address, then create array at that point
        printf("Enter element %d: ", i);
        scanf("%d", &n);
        // this step comes after, because the val is saved only after it is assigned
        (a->ptr)[i] = n;
    }
}

void show(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        // key syntax usage. provide pointer to first address, then create array at that point
        printf("%d\n", (a->ptr)[i]);
    }
}

int main()
{
    struct myArray marks;
    createArray(&marks, 10, 2);
    printf("setval\n");
    setVal(&marks);
    printf("show\n");
    show(&marks);
    return 0;
}