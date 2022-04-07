#include <stdio.h>
#include <string.h>

// for a given pair of consecutive indices, bubble sort checks if this array of 2 elements is sorted
// then it swaps around the elements in this pair if they are not ordered (inplace)
// doing this once for each of the size - 1 pairs of elements in the array results in the completion of 1 pass
// it keeps making these passes until it doesn't have to make a single swap

// bubble sort keeps sending the largest element to the back
void bubblesort(int A[], int n)
{
    // last pass is redundant because if we sort n - 1 elements (per bs), the last will already sorted
    for (int i = 0; i < n - 1; i++) // for number of passes
    {
        // CRUX-> there will be n - 1 - i comparisons, where i is index of pass (not pass)
        // n - 1 pairs can be checked by default
        // after the first pass, the last element is heaviest, so need to compare that one,
        // but at least one full set of comparisons was required to get this
        for (int j = 0; j < n - 1 - i; j++) // for comparisons within a pass
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
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
    int A[] = {7, 11, 9, 2, 17, 4};
    int n = sizeof(A) / sizeof(A[0]);
    print(A, n);
    bubblesort(A, n);
    print(A, n);
    return 0;
}