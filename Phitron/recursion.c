#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    int i, j, k = 7;
    int count;

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        count = 0;
        for (j = 1; j <= n; j++)
        {
            // if (arr[j] != arr[i] + 1 && arr[j] == arr[i])
            // {
            //     count++;
            // }
                printf("arr[j] = %d ", arr[j]);

        }
    }
    // printf("%d", count);

    return 0;
}
