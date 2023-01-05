#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;

    for (i = 0; i < n; i++)

    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = arr;

    for (i = 0; i < n; i++)

    {
        printf("%d ", *ptr);
        ptr++;
    }
    return 0;
}
