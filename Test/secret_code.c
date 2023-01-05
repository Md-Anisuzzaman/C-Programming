#include <stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);
    int arr[t];

    for (i = 0; i < t; i++)
    {

        scanf("%d", &arr[i]);
    }

    int isprime = 1;

    for (j = 2; j * j <= arr[i]; j++)
    {
        if (arr[i] % j == 0)
        {
            isprime = 0;
        }
    }
    for (j = 0; j < t; j++)
    {
        if (isprime==1)
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

// #include <stdio.h>
// int main()
// {
//     int t, i;
//     int isprime = 0;
//     int count = 0;
//     scanf("%d", &t);
//     int arr[t];
//     int prime = 0;
//     for (i = 0; i < t; i++)
//     {

//         scanf("%d", &arr[i]);
//     }

//     for (i = 0; i < t; i++)
//     {

//         if (arr[i] % 2 != 0)
//         {
//             count++;
//             isprime = 1;
//         }

//         else
//         {
//             isprime = 0;
//         }
//         if (isprime == 1 && count == 1)
//         {
//             printf("yes\n");
//         }
//         else
//         {
//             printf("no\n");
//         }
//     }

//     return 0;
// }
