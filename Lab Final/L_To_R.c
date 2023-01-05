#include <stdio.h>

int main()
{
    int L, R, T, i, j, K, flag = 0;

    scanf("%d", &T);

    for (K = 1; K <= T; K++)
    {
        scanf("%d%d", &L, &R);

        for (i = L; i <= R; i++)
        {

            flag = 1;

            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1)
                printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

