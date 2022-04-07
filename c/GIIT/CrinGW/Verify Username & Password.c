#include <stdio.h>
#include <string.h>

int main()
{
    // char *username = "a";
    // char username[] = {};
    char username;
    int password;

    printf("Username: ");
    scanf("%c", &username);

    if (username == 'a')
    {
        printf("Username matches\n");

        printf("Password: ");
        scanf("%d", &password);

        // printf("%d", password); // for checking execution
        if (password == 12345)
        {
            printf("Password matches");
        }
        else
            printf("Password does not match");
    }
    else
        printf("Username does not match");

    return 0;
}