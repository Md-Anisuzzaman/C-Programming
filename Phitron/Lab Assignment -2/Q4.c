#include <stdio.h>
void con_sum_even();
int main()
{
    int t, i;
    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        con_sum_even();
    }

    return 0;
}

void con_sum_even()
{
    int n, i, con_numbs = 4, index = 0;
    int con_even[4];

    scanf("%d", &n);
    
    if (n % 2 == 0)
    {
        n = ((n + 12) / 4);
    }

    /* (n-2) + (n-4) + (n-6) + n = n
      => 4n-12 = n
      => 4n = (n+12)/4
      => n = 112/4  [n=100]
      => n = 28
     So, 4 consecutive even value from greatest even
     integers 28 to 26, 24, 22  which addition value 100
   */

    for (i = 1; i <= con_numbs; i++)
    {
        con_even[index++] = n;
        n = n - 2;
    }

    for (i = con_numbs - 1; i >= 0; i--)
    {
        if (con_even[i] % 2 == 0)
        {
            printf("%d ", con_even[i]);
        }
    }
    printf("\n");
}
