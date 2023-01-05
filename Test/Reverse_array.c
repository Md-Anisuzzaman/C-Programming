#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int reverse_arr[n];
    for (i = n - 1, j = 0; i>=0; i--, j++)
    {
        reverse_arr[j]=arr[i];
    }
   for ( i = 0; i < n; i++)
   {
     printf("%d ",reverse_arr[i]);
   }
   

    return 0;
}