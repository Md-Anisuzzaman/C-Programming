#include <stdio.h>
#include <string.h>

int main()
{
    int row, col, n;
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        printf("%d", row);
    }

    for (col = 1; col <= n; col++)
    {
        // if (col == 1)
        // {
        //     continue;
        // }
        if (col == n)
        {
            break;
        }
        printf("\n%d", col);

        if (row != 0)
        {
            for (row = 2; row <= n - 1; row++)
            {
                printf(" ");
            }
        }
        printf("%d", n);
    }
    printf("\n");
    for (row = 1; row <= n; row++)
    {
        printf("%d", n);
    }

    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int i,j, n;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         printf("%d", i);
//     }

//     for (i = 1; i <= n; i++)
//     {
//         printf("\n%d", i);
//         if (i != 0)
//         {
//             for (i = 2; i <= n - 1; i++)
//             {
//                 printf(" ");
//             }
//         }
//         printf("%d", n);
//     }
//     printf("\n");
//     for (i = 1; i <= n; i++)
//     {
//         printf("%d", n);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int i, n;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         printf("%d", i);
//     }

//     for (i = 1; i <= n; i++)
//     {
//         printf("\n%d", i);
//         for (i = 2; i <= n-1; i++)
//         {
//             printf(" ");
//         }
//         printf("%d", n);
//     }

//     printf("\n");
//     for (i = 1; i <= n; i++)
//     {
//         printf("%d", n);
//     }

//     return 0;
// }
