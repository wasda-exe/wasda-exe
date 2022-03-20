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

    t = ((a * a + b) / c && (b + c) / a && (a + c) / b);
    if (t == 1)
    {
        t = ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b));
        printf("Given figure is right-angled triangle if output is 1, and is not right-angled triangle if input is 0: %d", t);
    }
    else
        printf("Not a triangle.");

    return 0;
}
