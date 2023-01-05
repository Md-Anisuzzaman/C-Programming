#include <stdio.h>

int main()
{
    int N, i, j;

    scanf("%d", &N);

    int arr[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (i = 1; i <= N; i++)
    {

        for (j = i + 1; j <= N; j++)
        {
            if (i != j)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
