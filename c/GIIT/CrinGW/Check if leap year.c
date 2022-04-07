#include <stdio.h>
#include <string.h>

int main()
{
    int year;
    printf("Year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("Is leap year");
    }
    else if (year % 100 == 0)
    {
        printf("Is not leap year");
    }
    else if (year % 4 == 0)
    {
        printf("Is leap year");
    }

    return 0;
}