#include <stdio.h>

int main()
{
    int N, i, j, temp = 0;
    scanf("%d", &N);
    int A[N], B[N], Diff[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < N; i++)
    {
        scanf("%d", &B[i]);
    }

    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {

            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    for (i = 0; i < N; ++i)
    {
        for (j = i + 1; j < N; ++j)
        {

            if (B[i] < B[j])
            {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    for (i = 0; i < N; ++i)
    {
        Diff[i] = A[i] - B[i];
    }

    for (i = 0; i < N; i++)
    {
        printf("%d ", Diff[i]);
    }
    return 0;
}