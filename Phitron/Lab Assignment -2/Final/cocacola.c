#include <stdio.h>
int main()
{
    int row, col, i, j;

    scanf("%d%d", &row, &col);
    int N[row][col];
    int M[row][col];
    int sum[row][col];

    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            scanf("%d", &N[i][j]);
        }
    }

    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            scanf("%d", &M[i][j]);
        }
    }

    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            sum[i][j] = N[i][j] + M[i][j];
        }
    }

    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int row, col, i, j;

//     scanf("%d %d", &row, &row);

//     int sum[100][100];
//     int N[100][100];
//     int M[100][100];

//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             scanf("%d", &N[i][j]);
//         }
//     }
//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             scanf("%d", &M[i][j]);
//         }
//     }

//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             sum[i][j] = N[i][j] + M[i][j];
//         }
//     }

//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             printf("%d  ", sum[i][j]);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int row, col, i, j;

//     scanf("%d %d", &row, &row);

//     int sum[100][100];
//     int N[100][100];
//     int M[100][100];

//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             scanf("%d", &N[i][j]);
//         }
//     }
//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             scanf("%d", &M[i][j]);
//         }
//     }

//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             sum[i][j] = N[i][j] + M[i][j];
//         }
//     }

//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             printf("%d  ", sum[i][j]);
//         }
//     }

//     return 0;
// }
