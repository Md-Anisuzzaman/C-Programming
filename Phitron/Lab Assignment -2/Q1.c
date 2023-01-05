/*
You have given a series, 1+2+3-4-5-6+7+8+9-10-11-12+......N . Your task to print the sum of the Nth element.
*/

#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = (sum + i);

        if (i % 3 == 0)
        {
            sum = sum + i;
        }

        if (i % 3 != 0)
        {
            sum = sum - i;
        }
        if (i % 3 == 0 && i % 3 != 0){
            sum = sum - i;
        }
    }

    printf("%d", sum);

    return 0;
}