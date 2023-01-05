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
    int *ptr = arr;

    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
    }
    int q;
    scanf("%d", &q);

    int l, r;
    for (i = 1; i <= q; i++)
    {
        scanf("%d%d", &l, &r);

        temp = *(ptr + l);
        *(ptr + l) = *(ptr + r);
        *(ptr + r) = temp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}