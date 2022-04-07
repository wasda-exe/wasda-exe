#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    float T, l = 0;
    const float pi = 3.14, g = 9.81;
    printf("Length   Time Period");
    for (int i = 0; i < 10; i++)
    {
        T = 2 * pi * sqrt(l / g);
        printf("%f    %f\n", l, T);
        l += 10;
    }

    return 0;
}