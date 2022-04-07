#include <stdio.h>
#include <string.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void print(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int temp = A[i + 1]; // don't put in inner loop or it'll be redeclared constantly at pos (i + 1)
        int j = i + 1;
        for (; j > 0; j--)
        {
            if (temp < A[j - 1])
            {
                // swap(&A[j - 1], &A[j]);
                A[j] = A[j - 1];
            }
            // else if (A[j] >= A[j - 1])
            else
            {
                break; // must break here to stop shifting process
            }
        }
        A[j] = temp; // we've taken it outside the loop. Safer, maybe
    }
}

int main()
{
    int A[] = {4, 5, 6, 7, 3, 2};
    int n = sizeof(A) / sizeof(A[0]);
    printf("Before sort\n");
    print(A, n);
    insertionSort(A, n);
    printf("After sort\n");
    print(A, n);
    return 0;
}