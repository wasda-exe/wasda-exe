#include <stdio.h>
#include <string.h>

int binarySearch(int a[], int element, int size)
{
    int start, end, mid;
    start = 0;
    end = size - 1;
    int i = 0;

    // more intuitive check
    // keep searching until low and high converges
    while (end >= start)
    {
        mid = (start + end) / 2;

        if (a[start] == element)
        {
            return start;
        }
        if (a[end] == element)
        {
            return end;
        }

        if (element <= a[mid])
        {
            end = mid;
        }
        if (element >= a[mid])
        {
            start = mid;
        }
        // printf("%d\n", i); //check how many times it runs
    }
    return -1;
}

int main()
{
    // binary search operates on a SORTED ONLY array
    int arr[] = {2, 8, 14, 32, 66, 100, 104, 200, 400};
    int element = 8, size = (sizeof(arr) / sizeof(*arr));

    printf("%d", binarySearch(arr, element, size));

    return 0;
}