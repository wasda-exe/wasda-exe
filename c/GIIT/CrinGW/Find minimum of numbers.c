#include <stdio.h>
#include <string.h>

int min(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int n;
    printf("How many numbers?: ");

    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", (a + i));
    }
    printf("The minimum number is: %d", min(a, n));

    return 0;
}