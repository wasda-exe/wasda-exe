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
        int temp = A[i + 1]; // don't put in inner loop otherwise it'll be redeclared constantly at pos
        int j = i + 1;
        for (; j > 0; j--)
        {
            if (temp < A[j - 1])
            {
                // swap(&A[j - 1], &A[j]);
                A[j] = A[j - 1];
            }
            // this accounts for the absorption forward. so basically, it isn't able to place
            // the element into the jth position successfully after it has done the copy

            // else if (A[j] >= A[j - 1])

            //// v1
            // else
            // {
            //     A[j] = temp; // it can't be allowed to continue or it will place temp at all lower values
            //     break;       // then why does this break not do a thing?
            // }                // likely it should only settle down when all statements execute

            /// v2 better, now it won't go on and dikc over every single lesser value. still wrong
            // loop never executes
            else
            {
                A[j] = temp; // it can't be allowed to continue or it will place temp at all lower values
                // print(A, n);
                break; // then why does this break not do a thing?
            }          // likely it should only settle down when all statements execute

            // the lowest number keeps absorbing forward whenever the new element is lesser than the very
            // first element. If larger, it will be sorted only.
            // because our algorithm compares with the element before itself

            // basically, it firsed placed the
        }
        // print(A, n);
        // A[j] = temp;
        print(A, n);
    }
}

int main()
{
    int A[] = {4, 1, 6, 7, 3, 1, 2};
    int n = sizeof(A) / sizeof(A[0]);
    printf("Before sort\n");
    print(A, n);
    insertionSort(A, n);
    printf("After sort\n");
    print(A, n);
    return 0;
}