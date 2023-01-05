
// #include <stdio.h>
// int main()
// {
//     int n1, n2, gcd, lcm, count = 1;

//     scanf("%d  %d", &n1, &n2);

//     while (count <= n1 && count <= n2)
//     {
//         if (n1 % count == 0 && n2 % count == 0)
//         {
//             gcd = count;
//         }
//         count++;
//     }

//     lcm = (n1 * n2) / gcd;
//     printf("The LCM of 12 and 18 is %d", lcm);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int t, i;
    int isprime = 0;
    scanf("%d", &t);
    int arr[t];
    for (i = 0; i < t; i++)
    {

        scanf("%d", &arr[i]);
    }

    for (i = 0; i < t; i++)
    {
        int n = arr[i];

        if (n < 2)
        {
            isprime = 0;
        }

        for (int i = 2; i * i <= n; i++)
        {

            if (n % i == 0)
            {
                isprime = 0;
            }
        }

        isprime = 1;

        if (isprime == 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
