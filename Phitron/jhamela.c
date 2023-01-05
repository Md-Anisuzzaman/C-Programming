#include <stdio.h>
#include <math.h>

int have_seven_digits(int i, int n, int arr[]);

int main()
{
    int n, i, j, result, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    result = have_seven_digits(i, n, arr);
    if (result == 1)
    {
        printf("Beautiful");
    }
    else
    {
        printf("Ugly");
    }
    return 0;
}

int have_seven_digits(int i, int n, int arr[])
{

    int digit;
    int *ptr;
    ptr = arr;

    if (n % 2 == 0)
    {
       while(n>0)
        {
            digit = *ptr % 10;
            if (digit == 7)
            {
                return 1;
            }
            *ptr = *ptr / 10;
             ptr++;
        }
    }
    if (n % 2 != 0)
    {
        n = n / 2 + 1;

         while(n>0)
        {
            digit = *ptr % 10;
            if (digit == 7)
            {
                return 1;
            }
            *ptr = *ptr / 10;
             ptr++;
        }
    }

    return 0;
}