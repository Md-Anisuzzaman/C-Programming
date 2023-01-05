#include <stdio.h>

int main()
{
    int n, temp;
    int i;
    scanf("%d", &n);
    int arr[n];

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int q;
    scanf("%d", &q);

    int l, r;
    for (i = 1; i <= q; i++)
    {
        scanf("%d%d", &l, &r);

        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}