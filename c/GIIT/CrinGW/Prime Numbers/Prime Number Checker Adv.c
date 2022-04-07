#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int flag = 1;
    int t = n / 2; // else it will run multiple times
    for (int i = 2; i <= t; i++)
    {
        if (!(n % i))
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Is prime");
    else
        printf("Not prime");
    return 0;
}