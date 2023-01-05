#include <stdio.h>
int isPrime(int n)
{
}
int main()
{
    int t, i;
    int isprime = 0;
    int count = 0;
    scanf("%d", &t);
    int arr[t];
    int prime = 0;
    for (i = 0; i < t; i++)
    {

        scanf("%d", &arr[i]);
    }

    for (i = 0; i < t; i++)
    {
        int n = arr[i];
        if (n < 2)
        {
            return 0;
        }

        for (int i = 2; i * i <= n; i++)
        {

            if (n % i == 0)
            {
                return 0;
            }
        }

        return 1;
    }

    return 0;
}