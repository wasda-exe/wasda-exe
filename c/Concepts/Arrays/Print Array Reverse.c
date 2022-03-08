#include <stdio.h>

int main()
{
    // int a, b, sum;

    // printf("Enter first number: ");
    // scanf("%d", &a);
    // printf("Enter first number: ");
    // scanf("%d", &b);

    // printf("Enter two numbers:\n");
    // scanf("%d %d", &a, &b);
    // printf("Sum is: ");
    // sum = a + b;
    // printf("%d", sum);

    int n, sum;
    printf("How many numbers would you like?\n");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Number: ");
        scanf("%d", &a[i]);
    }

    printf("The same series backwards: \n");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}