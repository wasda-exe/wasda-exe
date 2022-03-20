#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length, i = 0;
    char *ptr;

    // while saves write time
    while (i < 3)
    {
        printf("Employee %d: Enter your employee ID length: ", i);
        scanf("%d", &length);

        ptr = malloc(length * sizeof(char));

        printf("Enter your employee ID: ");
        // note--> char string pointer can save and behaves as the start point for a string
        scanf("%s", ptr);

        // in c, a string is a char array. In cpp a string is different
        printf("Your employee ID is: %s\n", ptr);
        free(ptr);

        i++;
    }

    return 0;
}