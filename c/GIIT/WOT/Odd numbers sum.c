#include <stdio.h>
#include <string.h>

int main()
{
    int n, count = 0, sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d:", i + 1);
        scanf("%d", &n);
        count += n % 2;
        sum += (n % 2) * n;
    }
    printf("Count of odd numbers: %d\n", count);
    printf("Sum of odd numbers: %d", sum);

    return 0;
}