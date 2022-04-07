#include <stdio.h>
#include <string.h>

int main()
{
    int score, count = 0; // remember to initialize count
    int i = 1;            // allows us to refer to player directly
again:
    printf("Enter core of player %d: ", i);
    scanf("%d", &score);
    if (score < 0)
        goto again; // IT CATCHES AND REPEATS THAT PLAYER ITSELF!!!!!

    count += score >= 100;
    i++;
    if (i <= 11)
        goto again;

    printf("\nTotal number of players to get a century is %d", count);
    return 0;
}