#include <stdio.h>

int main()
{
    int N, i, j;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N; i++)
        {
            if (j % 2 == 0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
    }

    return 0;
}
