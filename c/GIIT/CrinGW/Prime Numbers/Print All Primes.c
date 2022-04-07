#include <stdio.h>
#include <string.h>

int main()
{

    for (int j = 3; j <= 100; j++)
    {
        int flag = 1;

        for (int i = 2; i <= j / 2; i++)
        {
            if (!(j % i))
            {
                flag = 0;
            }
        }
        if (flag)
            printf("%d\n", j);
        // else
        //     printf("Not prime");
    }

    return 0;
}