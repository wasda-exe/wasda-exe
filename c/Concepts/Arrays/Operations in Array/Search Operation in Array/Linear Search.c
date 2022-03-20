#include <stdio.h>
#include <string.h>

int linearSearch(int a[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == element)
        {
            return i;
        }
        // if prev statement never held true for all i values, then returns -1
        // if (i == size - 1)
        // {
        //     return -1;
        // }

    } // directly, if for loop fails to find any index i for which val at i matches val of element
    return -1;
}

int main()
{
    // linear search operates on sorted/UNSORTED array
    int arr[] = {2, 8, 14, 32, 66, 100, 104, 200, 400};
    int element = 14, size = (sizeof(arr) / sizeof(*arr));

    int searchIndex = linearSearch(arr, size, element);

    printf("The element %d was found at index %d", element, searchIndex);

    return 0;
}