

// #include <stdio.h>
// #include <math.h>

// int have_seven_digits(int i, int n, int arr[]);

// int main()
// {
//     int n, i, j, result, count = 0;
//     scanf("%d", &n);
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     result = have_seven_digits(i, n, arr);
//     if (result == 1)
//     {
//         printf("Beautiful");
//     }
//     else
//     {
//         printf("Ugly");
//     }
//     return 0;
// }

// int have_seven_digits(int i, int n, int arr[])
// {

//     int digit;
//     int *ptr;
//     ptr = arr;

//     if (n % 2 == 0)
//     {
//         for (i = 0; i < n; i++)
//         {
//             digit = *ptr % 10;
//             if (digit == 7)
//             {
//                 return 1;
//             }
//               else{
//                 return 0;
//             }
//             *ptr = *ptr / 10;
//             ptr++;
//         }
//     }
//     if (n % 2 != 0)
//     {
//         n = n / 2 + 1;

//         for (i = 0; i < n; i++)
//         {
//             digit = *ptr % 10;
//             if (digit == 7)
//             {
//                 printf("mama\n");
//                 return 1;
//             }
//             else{
//                 return 0;
//             }
//             *ptr = *ptr / 10;
//             ptr++;
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n, i,j, r;
//     scanf("%d", &n);
//     int arr[n];

//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int sum;
//     for (j = n; j > 0; j--)
//     {
//         printf("arr = %d ", arr[j]);
//         sum = 0;
//         r = arr[j] % 10;
//         printf("remainder = %d\n", r);
//         sum = sum + r;
//         arr[i] = arr[i] / 10;
//     }

//     printf("sum = %d\n ", sum);
//     return 0;
// }

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
    int sum = 0;
    for (int j = 0; j < n; j++)
    {

        int value = arr[j];
        while (value != 0)
        {
            sum += (value % 10);
            value /= 10;
        }
    }

    printf("sum = %d\n ", sum);
    return 0;
}