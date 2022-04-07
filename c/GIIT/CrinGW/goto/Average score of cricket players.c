#include <stdio.h>
#include <string.h>

int main()
{
    int score, sumscore = 0, avg;
    int i = 1;
label:
    printf("Score of player %d: ", i);
    scanf("%d", &score);
    sumscore += score;
    i++;
    if (i <= 11)
        goto label;
    avg = sumscore / 11.0; // 11.0 to ensure float division
    printf("Average score of the players is %d", avg);
    return 0;
}