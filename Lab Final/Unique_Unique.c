#include <stdio.h>

int main()
{
    int N, i, j;
    scanf("%d", &N);

    char str[N];
    scanf("%s", &str);

    int flag;
    
    int count = 0;

    for (i = 0; i < N; i++)
    {
        flag = 0;

        for (j = 0; j < N; j++)
        {
            if (i != j)
            {
                if (str[i] == str[j])
                {
                    flag++;
                }
            }
        }

        if (flag == 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}