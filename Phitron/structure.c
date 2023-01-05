#include <stdio.h>
#include <math.h>

int have_seven_digits1(int i, int n, int arr[]);
int have_seven_digits2(int i, int n, int arr[]);

int main()
{
    int n, i, j, result, count = 0;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (n % 2 == 0)
    {
        result = have_seven_digits1(i, n, arr);
    }
    else
    {
        result = have_seven_digits2(i, n, arr);
    }

    if (result == 3)
    {
        printf("Beautiful");
    }
    else
    {
        printf("Ugly");
    }
    return 0;
}

int have_seven_digits1(int i, int n, int arr[])
{

    int digit;
    int *ptr;
    ptr = arr;

    int count;

    while (n > 0)
    {
        digit = *ptr % 10;
        count = 0;
        if (digit == 7)
        {
            count++;
        }
        *ptr = *ptr / 10;
        ptr++;
    }
    return count;
}

int have_seven_digits2(int i, int n, int arr[])
{

    int digit;
    int *ptr;
    ptr = arr;

    int count = 0;

    n = n / 2 + 1;

    while (n > 0)
    {
        digit = *ptr % 10;
        count = 0;
        if (digit == 7)
        {
            count++;
        }
        *ptr = *ptr / 10;
        ptr++;
    }

    return count;
}