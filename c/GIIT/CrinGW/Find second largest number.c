#include <stdio.h>
#include <string.h>

int max2(int arr[], int size)
{
    int max = arr[0];
    int max2 = max;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max2)
        {
            if (arr[i] > max)
            {
                max2 = max;
                max = arr[i];
            }
            else
            {
                max2 = arr[i];
            }
            // printf("%d\n", max);
        }
    }

    return max2;
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
    printf("The second maximum number is: %d", max2(a, n));

    return 0;
}