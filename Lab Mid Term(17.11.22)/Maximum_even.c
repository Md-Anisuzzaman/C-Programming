
// #include <stdio.h>
// int main()
// {
//     int n, i, j;
//     int max_even = 0;
//     int max = 0;
//     scanf("%d", &n);
//     int a[n];

//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (i = 0; i < n; i++)
//     {
//         if (a[i] % 2 == 0 && a[i] > 0)
//         {
//             if (a[i] > max)
//                 max = a[i];
//         }
//     }

//     max_even = max;

//     int sum;

//     for (i = 0; i < n - 1; i++)
//     {

//         for (j = i + 1; j < n; j++)
//         {

//             sum = a[i] + a[j];

//             if (sum % 2 == 0 && sum > max_even)
//             {
//                 max_even = sum;
//             }
//         }
//     }

//     printf("%d", max_even);
//     return 0;
// }


#include <stdio.h>
int main()
{
    int n, i, j;
    int max_even = 0, sum = 0;
    int max = 0;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] > 0)
        {
            if (a[i] > max)
                max = a[i];
        }

        for (j = 1; j < n; j++)
        {
            if (max == a[j])
                break;
            sum = max + a[j];
            if (sum % 2 == 0 && sum > max)
            {
                max_even = sum;
            }
        }
    }

    printf("%d", max_even);
    return 0;
}
