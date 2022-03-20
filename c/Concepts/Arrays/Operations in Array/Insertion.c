#include <stdio.h>
#include <string.h>

void display(int arr[], int n)
{
    // Code traversal
    //  we've also traversed this array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    // Code insertion
    if (size >= capacity)
    {
        return -1;
    }
    // size - 1, not size. size is number of elements, you want index of elements
    // >= not >, since it has to copy the val that had been stored at index, as well
    for (int i = size - 1; i >= index; i--)
    {
        // arr[i] = arr[i - 1]; --> incorrect. last element doesn't get allocated. destructive
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    // size++; --> not useful here, as local var update
    return 1;
}

int main()
{
    // only using 4 out of 100 possible elements stored
    int arr[100] = {7, 8, 12, 27, 88};
    // arr passed by address
    int size = 5, element = 45, capacity = 100, index = 3;
    display(arr, size);
    indInsertion(arr, size, element, capacity, index); // ind --> index
    size++;                                            // required otherwise, display will not display last element
    display(arr, size);
    // equivalent to, looks fancier
    //  sortedInsertion(arr, 4, 45, 100, 3);

    return 0;
}