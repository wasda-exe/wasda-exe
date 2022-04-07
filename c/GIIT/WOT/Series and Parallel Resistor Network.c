#include <stdio.h>
#include <string.h>

int main()
{
    float r1, r2, r3, rs, rp, t, v, is, ip;

    printf("Enter resistance r1: ");
    scanf("%f", &r1);

    printf("Enter resistance r2: ");
    scanf("%f", &r2);
    printf("%f", r2);

    printf("Enter resistance r3: ");
    scanf("%f", &r3);
    printf("%f", r3);

    printf("Enter voltage v: ");
    scanf("%f", &v);

    rs = r1 + r2 + r3;
    printf("%f", rs);

    t = 1 / r1 + 1 / r2 + 1 / r3;
    rp = 1 / t;

    is = v / rs;
    ip = v / rp;

    printf("Current through network in series connection: %f\nCurrent through network in parallel connection: %f", is, ip);

    return 0;
}
