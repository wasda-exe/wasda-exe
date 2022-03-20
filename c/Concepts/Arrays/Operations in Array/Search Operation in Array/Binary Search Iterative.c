#include <stdio.h>
#include <string.h>

int binarySearch(int a[], int size, int element)
{
    int low, high, mid;
    low = 0;
    high = size - 1;
    int i = 0;

    // more intuitive check
    // keep searching until low and high converges
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == element)
        {
            return mid;
        }

        if (a[mid] < element)
            low = mid + 1;

        else
            high = mid - 1;

        // else
        //     start = mid;

        // i++;               // the element at 0th index confuses otherwise
        // printf("%d\n", i); // check how many times it runs, modify which element is being searched for
    }
    return -1;
}

int main()
{
    // binary search operates on a SORTED ONLY array
    int arr[] = {2, 8, 14, 32, 66, 100, 104, 200, 400};
    int element = 32, size = (sizeof(arr) / sizeof(*arr));

    int searchIndex = binarySearch(arr, size, element);

    printf("The element %d was found at index %d", element, searchIndex);

    return 0;
}