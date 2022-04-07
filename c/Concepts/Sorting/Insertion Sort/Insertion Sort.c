#include <stdio.h>
#include <string.h>

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
    int key, j;
    // Loop for passes // notice how i starts at 1
    for (int i = 1; i <= n - 1; i++) //<= not just <
    {
        key = A[i];
        j = i - 1;
        // Loop for each pass
        while (j >= 0 && A[j] > key)
        // while (A[j] < key && j >= 0) // for descending order
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key; // BREAKPOINT
    }
}

int main()
{

    // -1   0   1   2   3   4   5
    //     12,| 54, 65, 07, 23, 09 // --> i = 1, key = 54, j = 0;
    //     12,| 54, 65, 07, 23, 09 // --> 1st pass done (i = 1)!

    //     12, 54,| 65, 07, 23, 09 // --> i = 2, key = 65, j = 1;
    //     12, 54,| 65, 07, 23, 09 // --> 2nd pass done (i = 2)!
    // pipe is moved after each pass is completed. it moves with increment in i
    //      12, 54, 65,| 07, 23, 09 // --> i = 3, key = 7, j = 2
    //      12, 54, 65,| 65, 23, 09 // --> i = 3, key = 7, j = 1 (after loop is finished)
    //      12, 54, 54,| 65, 23, 09 // --> i = 3, key = 7, j = 0 (after loop is finished)
    //      12, 12, 54,| 65, 23, 09 // --> i = 3, key = 7, j = -1 (after loop is finished)
    //      07, 12, 54,| 65, 23, 09 // --> execution breaks out of while loop --> 3rd pass done (i = 3)!

    //     07, 12, 54, 65,| 23, 09 // --> i = 4, key = 23, j = 3
    //     07, 12, 54, 65,| 65, 09 // --> i = 4, key = 23, j = 2 (after loop)
    //     07, 12, 54, 54,| 65, 09 // --> i = 4, key = 23, j = 1 (after loop)
    //     07, 12, 23, 54,| 65, 09 // places --> 4th pass done

    //     07, 12, 23, 54, 65,| 09 // .... same steps --> i = 5, key = 09, j = 4
    //     07, 09, 12, 23, 54,| 65 // .... --> 5th pass done ()

    //     07, 09, 12, 23, 54, 65| // .... --> 5th pass done ()

    // -1   0   1   2   3   4   5
    //     12,| 54, 65, 07, 23, 09 // --> 1st pass done 54 is key here. This will be compared with 12
    //     12, 54,| 65, 07, 23, 09 // --> 2nd pass done // line khisak gaya// ab 65 ko insert karna hai, 12 54 wali array mei

    // the variable j is bhaiya checker. It stores the position where the bhaiya you have to ask is located

    int A[] = {12, 54, 65, 7, 23, 9};
    int n = sizeof(A) / sizeof(A[0]);
    printf("Before sort\n");
    print(A, n);

    insertionSort(A, n);

    printf("After sort\n");
    print(A, n);
    return 0;
}