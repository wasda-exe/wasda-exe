#include <stdio.h>
#include <string.h>

int main()
{
    float a, b, c;
    int t;

    printf("Enter side 1: ");
    scanf("%f", &a);

    printf("Enter side 2: ");
    scanf("%f", &b);

    printf("Enter side 3: ");
    scanf("%f", &c);

    t = ((a + b) / c && (b + c) / a && (a + c) / b);

    printf("Given figure is a triangle if output is 1, and is not a triangle if input is 0: %d", t);

    return 0;
}
