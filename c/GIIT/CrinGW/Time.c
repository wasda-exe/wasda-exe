#include <stdio.h>
#include <string.h>

int main()
{
    int h, m;
    char c;
    printf("Time: ");
    scanf("%d%c%d", &h, &c, &m);

    printf("Hour: %d\nMinute: %d", h, m);

    return 0;
}