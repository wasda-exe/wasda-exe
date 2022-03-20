#include <stdio.h>
#include <string.h>
#define g 9.8

int main()
{
    float v, u, s;

    printf("Enter initial velocity: ");
    scanf("%f", &u);

    for (int t = 1; t <= 5; t++)
    {
        v = u + g * t;
        s = u * t + g * t * t / 2;

        printf("At time t = %d s\n\tinitial velocity is %0.2f m/s\n\tdistance covered is %0.2f m\n\n", t, v, s);
    }

    return 0;
}
