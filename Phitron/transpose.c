#include <stdio.h>
#include <string.h>

int main()
{
    int n, k, i, j;
    scanf("%d%d", &n, &k);
    int even[n], odd[n], all_even_odd[n];

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even[i] = i;
            printf("even = %d \n", even[i]);
        }
        else
        {

            odd[i] = i;
            printf("odd = %d ", odd[i]);
        }
    }

    for (i = 1; i <= n; i++)
    {
        all_even_odd[i] = even[i];

    }
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", all_even_odd[i]);
    }

    // printf("even = %d \n odd =  %d ",even[i],odd[i]);

    // for (int j = 0; j < n; j++)
    // {

    //     if (all_even_odd[j] == k)
    //     {
    //         printf("The %d element in this sequence is %d", i, all_even_odd);
    //           printf("painai\n");

    //     }

    // }

    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int n, k, i, found = 0, even = 0, odd = 0;
//     scanf("%d%d", &n, &k);
//     int number[n], all_even_odd[n];

//     for (i = 0; i < n; i++)
//     {
//         if (number[i] % 2 == 0)
//         {
//             // all_even_odd[i] = all_even_odd[i] + number[i];
//             // printf("%d",all_even_odd);
//             printf("even = %d\n",number);

//         }
//         else
//         {
//             // all_even_odd[i] = all_even_odd[i] + number[i];
//             printf("odd = %d\n",number);
//         }
//     }

//     for (int j = 0; j < n; j++)
//     {

//         if (all_even_odd[j] == k)
//         {
//             printf("The %d element in this sequence is %d", i, all_even_odd);
//               printf("painai\n");

//         }

//     }

//     return 0;
// }
