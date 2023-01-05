#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, i;
    int result = 0;
    char S[100];

    scanf("%s", S);
    scanf("%d %d", &a, &b);
    int len = strlen(S);

    for (i = 0; i <= len; i++)
    {
        if (S[i] == '+')
        {
            result = result + (a + b);
        }

        if (S[i] == '*')
        {
            result = result + (a * b);
        }
    }

    printf("%d", result);

    return 0;
}