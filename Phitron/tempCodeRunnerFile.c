#include <stdio.h>
void swap(int n);
int main()
{
    int n;
    scanf("%d", &n);
    swap(n);
    return 0;
}

void swap(int n)
{
    int temp, i;
    int arr[n];

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int q;
    scanf("%d", &q);
    int *ptr;
    ptr = arr;
    int l, r;
    for (i = 1; i <= q; i++)
    {
        scanf("%d%d", &l, &r);

        temp = ptr[l];
        ptr[l] = ptr[r];
        ptr[r] = temp;
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", ptr[i]);
    }
}