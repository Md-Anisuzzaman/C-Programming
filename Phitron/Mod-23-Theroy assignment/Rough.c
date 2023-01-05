#include <stdio.h>

int main()
{
    int n, k, i;
    scanf("%d%d", &n, &k);
    int arr[50];
    int size = 1;

    for (i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {

            arr[size++] = i;
        }
    }

    for (i = 1; i <= n; i++)
    {

        if (i % 2 != 0)
        {

            arr[size++] = i;
        }
    }

    for (i = 1; i <= n; i++)
    {

        printf("%d ", arr[i]);
    }

    printf("\n");

    for (i = 1; i <= n; i++)
    {
        if (arr[i] == k)
        {
            printf("The %dth element in this sequence is %d\n", i, arr[i]);
        }
    }
    return 0;
}
