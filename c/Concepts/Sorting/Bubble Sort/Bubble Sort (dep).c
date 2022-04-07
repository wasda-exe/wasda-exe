#include <stdio.h>
#include <string.h>

// for a given pair of consecutive indices, bubble sort checks if this array of 2 elements is sorted
// then it swaps around the elements in this pair if they are not ordered (inplace)
// doing this once for each of the size - 1 pairs of elements in the array results in the completion of 1 pass
// it keeps making these passes until it doesn't have to make a single swap

// bubble sort keeps sending the largest element to the back
void bubblesort(int arr[], int size)
{
    int count = 0;
    do
    {
        count = 0;
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                count++;
            }
        }
        // after having compared the values at the following pairs of indices
        // 7 11 9 2 17 4        0,1
        // 7 9 11 2 17 4        1,2
        // 7 9 2 11 17 4        2,3
        // 7 9 2 11 17 4        3,4
        // 7 9 2 11 4 17        4,5
        // after first pass -> 7 9 2 11 4 17 // sent largest element to the back

    } while (count != 0);
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {7, 11, 9, 2, 17, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, size);
    print(arr, size);
    return 0;
}