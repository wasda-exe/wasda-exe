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

void indDeletion(int arr[], int size, int index)
{
    // Code deletion
    // no if statements. we've assumed caller such that index < capacity

    // size - 1 will eliminate last element as well, size will leave it alone
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    // size++; --> not useful here, as local var update
}

int main()
{
    // only using 4 out of 100 possible elements stored
    int arr[100] = {7, 8, 12, 27, 88};
    // arr passed by address
    int size = 5, index = 3;
    display(arr, size);
    indDeletion(arr, size, index); // ind --> index
    size--;                        // required otherwise, display will display last element
    display(arr, size);

    return 0;
}