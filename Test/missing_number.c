#include <stdio.h>
int main()
{
    int t, sum, a, b, c, missing;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &sum, &a, &b, &c);
        int n = (a+b+c);
        missing = sum - n;
        printf("%d ",missing);
    }
    printf("\n");

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int t, missing;
//     scanf("%d", &t);
//     int numbers[t];
//     int sum = 0;
//     for (int i = 0; i < t; i++)
//     {
//         scanf("%d", &numbers[i]);
//         sum += numbers[i];
//     }
//     t++;
//     missing = ((t * (t + 1)) / 2) - sum;
//     printf("%d", missing);
//     return 0;
// }
