#include <stdio.h>
#include <string.h>

float slope(float x1, float y1, float x2, float y2)
{
    if (x2 == x1)
        printf("bruh");
    return (y2 - y1) / (x2 - x1);
}

int main()
{
    float x1, y1, x2, y2, s1, s2;

    printf("Enter X1: ");
    scanf("%f", &x1);

    printf("Enter Y1: ");
    scanf("%f", &y1);

    printf("Enter X2: ");
    scanf("%f", &x2);

    printf("Enter Y2: ");
    scanf("%f", &y2);

    s1 = slope(x1, y1, x2, y2);

    printf("Enter X1: ");
    scanf("%f", &x1);

    printf("Enter Y1: ");
    scanf("%f", &y1);

    printf("Enter X2: ");
    scanf("%f", &x2);

    printf("Enter Y2: ");
    scanf("%f", &y2);

    printf("Slope is: %f", s2);
    s2 = slope(x1, y1, x2, y2);

    if (s1 * s2 == -1)
    {
        printf("1");
    }
    else
        printf("0");

    return 0;
}
