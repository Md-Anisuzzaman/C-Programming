#include <stdio.h>

int have_seven_digits(int n);

int main()
{
    int n;
    scanf("%d", &n);

    int result = have_seven_digits(n);
    
    if (3<=result)
        printf("Beautiful");
    else
        printf("Ugly");
    return 0;
}

int have_seven_digits(int n)
{
    int i, j;
    int arr[n];
    int *ptr = arr;
   for (i = 0; i < n; i++)

    {
        scanf("%d", ptr);
    }

    int digit;
  

    int count = 0;

    if (n % 2 == 0)
    {
        for (j = 0; j < n; j++)
        {
            int value = *ptr;
            while (value != 0)
            {
                digit = (value % 10);
                if (digit == 7)
                {
                    count = count + 1;
                }
                value = value / 10;
            }
            *ptr++;
        }
    }

    if (n % 2 != 0)
    {
        n = n / 2 + 1;
        for (j = 0; j < n; j++)
        {
            int value = *ptr;
            while (value != 0)
            {
                digit = (value % 10);
                if (digit == 7)
                {
                    count = count + 1;
                }
                value = value / 10;
            }
            *ptr++;
        }
    }

    return count;
}