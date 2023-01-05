#include <stdio.h>

int main()
{
    int n, i, k, out_of_the_team = 0;
    scanf("%d %d", &n, &k);
    int runs_of_players[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &runs_of_players[i]);

        if (k > runs_of_players[i])
        {
            out_of_the_team++;
        }
    }
   printf("%d", out_of_the_team);

    return 0;
}