#include <stdio.h>

int main()
{
    int n, i, j;
    int counter = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {

            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    counter++;
                }
            }
        }
        if (counter == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}