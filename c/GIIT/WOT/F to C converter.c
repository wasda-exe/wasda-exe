#include <stdio.h>
#include <string.h>

int main()
{
    float f = 0, c, x;
    printf("How many temperatures would you like to convert to Celsius? : ");
    scanf("%f", &x);

    printf("The temperature comparison table:\n");
    for (int i = 0; i < x; i++)
    {
        f = i * 20;
        c = 5.f / 9.f * (f - 32);

        printf("\t %f \t %d \n", f, (int)c);
    }

    return 0;
}