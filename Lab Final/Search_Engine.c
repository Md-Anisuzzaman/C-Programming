#include <stdio.h>

int main()
{
    int T, N, S, i, j, k;

    scanf("%d", &T);

    for (k = 1; k <= T; k++)
    {
        scanf("%d", &N);
        int arr[N];

        for (i = 1; i <= N; i++)
        {
            scanf("%d", &arr[i]);
        }

        scanf("%d", &S);
        int count = 0;

        for (j = 1; j <= N; j++)
        {
            if (S == arr[j])
            {
                count = j;
                break;
            }
            else
            {
                count = 0;
            }
        }
        if (count == 0)
        {
            printf("Case %d: Not Found\n", k);
        }
        else
        {
            printf("Case %d: %d\n", k, count);
        }
    }

    return 0;
}