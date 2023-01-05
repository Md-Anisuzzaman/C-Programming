// #include <stdio.h>

// int main()
// {
//     int i, j, temp, N = 11;
//     int arr[] = {12, 7, 9, 1, 3, 73, 11, 15,62,19,4};
//     int sorted_arr[N];

//     for (i = 0; i < N; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     for (j = 0; j < 5; j++)
//     {
//         for (i = 0; i < (N - 1); i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//     }
//     for (i = 0; i < N; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

#include <stdio.h>

int main()
{
    int i, j, temp, N = 11;
    int arr[] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    int sorted_arr[N];

    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    printf("Five Time Starts Now\n");

    for (i = 0; i < (N - 1); i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }


      for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < (N - 1); i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }


      for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < (N - 1); i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }


      for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < (N - 1); i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }


      for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < (N - 1); i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }


      for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}