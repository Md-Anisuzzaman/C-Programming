#include <stdio.h>
#include <string.h>

int main()
{
    int n, t, i, j;
    int count = 0;
    char S[100];
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);

        for (j = 0; j < n; j++)
        {
            scanf("%s", S);

            if (S[j] == '1' && S[j + 1] == '0')
            {
                count++;
            }
            if (S[j] == '0' && S[j + 1] == '1')
            {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}