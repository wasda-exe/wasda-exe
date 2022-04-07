#include <stdio.h>
#include <string.h>

int main()
{
    float p, q, r, s;
    scanf("%d%d%d%d", &p, &q, &r, &s);
    if (p * s == r * q) // look at a diagram for formula
    {
        printf("Wheatstone bridge is in balanced condition.");
    }
    else
        printf("Wheatstone bridge is in unbalanced condition.");

    return 0;
}