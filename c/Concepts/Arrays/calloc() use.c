#include <stdio.h>
#include <stdlib.h> //calloc, malloc, realloc, free

int main()
{
    int n;
    int *ptr;

    // malloc
    // printf("Enter size of array you want: ");
    // scanf("%d", &n);

    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     // scanf("%d", (ptr + i));
    //     printf("Enter the value no of %d of this array.\n", i);
    //     // scanf won't deploy new line before itself, thus put \n before
    //     // can use ptr[i] exactly as you would a pointer

    //     //## EXPLANATION
    //     // ptr is a pointer that points to the first element of the dynamically allocated array
    //     // just as a[] has a, which is a pointer that points to first element of statically alloc array
    //     scanf("%d", &ptr[i]);
    // }
    // printf("\n");
    // for (int i = 0; i < n; i++)
    // {
    //     // printf("%d\n", *(ptr + i));
    //     // can use ptr[i] exactly as you would a pointer
    //     printf("The value at position %d of array is %d\n", i, ptr[i]);
    // }

    // calloc
    printf("Enter size of array you want: ");
    scanf("%d", &n);
    // note different syntax
    ptr = (int *)calloc(n, sizeof(int));
    // works normally, but to show you that calloc initializes values to 0
    // this, however, is overhead. use in necessary

    //  for (int i = 0; i < n; i++)
    //  {
    //      // scanf("%d", (ptr + i));
    //      printf("Enter the value no of %d of this array.\n", i);
    //      // scanf won't deploy new line before itself, thus put \n before
    //      // can use ptr[i] exactly as you would a pointer

    //     //## EXPLANATION
    //     // ptr is a pointer that points to the first element of the dynamically allocated array
    //     // just as a[] has a, which is a pointer that points to first element of statically alloc array
    //     scanf("%d", &ptr[i]);
    // }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        // printf("%d\n", *(ptr + i));
        // can use ptr[i] exactly as you would a pointer
        printf("The value at position %d of array is %d\n", i, ptr[i]);
    }

    return 0;
}