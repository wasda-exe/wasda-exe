#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    // int flag = 1;
    int t = n / 2; // else it will run multiple times
    for (i = 2; i <= t; i++)
    {
        if (!(n % i))
        {
            // flag = 0;
            printf("Not prime");
            i = t + 2;
            break;
            // return 0; // makes all other clutter defunkt
        }
    }
    if (i != t + 2)
        printf("Is prime");

    // if (flag)
    //     printf("Is prime");
    return 0;
}