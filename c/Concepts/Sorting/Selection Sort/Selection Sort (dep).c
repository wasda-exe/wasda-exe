#include <stdio.h>
#include <string.h>

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("swap");
// }

// called selection sort because you selected an elemnt that you found and put it at it's correct pos
void selectionSort(int *A, int n)
{
    int min, pos;
    for (int i = 0; i <= n - 1; i++)
    {
        min = A[i]; // the first selected element within the subarray
        // printf("%d\n", i);
        for (int j = i; j <= n - 1; j++)
        {
            printf("bruh%d\n", j);
            // if (A[j] < min) // the lack of a single fucking equality made this thing fail...
            if (A[j] <= min)
            {
                min = A[j];
                pos = j;
                // printf("ifcringe%d\n", A[j]);
            }
        }
        // swap(&A[i], &A[pos]);
        int temp = A[i];
        A[i] = A[pos];
        A[pos] = temp;
    }
}

void print(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    // int A[] = {0, 8, 7, 1, 3};
    int A[] = {4, 1, 6, 7, 3, 1, 2};
    int n = sizeof(A) / sizeof(A[0]);
    printf("Before sort\n");
    print(A, n);

    selectionSort(A, n);

    printf("After sort\n");
    print(A, n);
    return 0;
}