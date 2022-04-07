#include <stdio.h>
#include <string.h>

int main()
{
    float n;
    printf("Number: ");
    scanf("%f", &n);
    if (n > 0)
    {
        n += 0.50;
        n = (int)n;
    }
    else
    {
        n -= 0.50;
        n = (int)n;
    }
    printf("%d", (int)n);
    return 0;
}