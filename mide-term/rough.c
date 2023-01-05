

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int t, i, j;
    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        int flag = 0;
        scanf("%s", str);
        int length = strlen(str);
        for (j = 0; j < length; j++)
        {
            if (str[j] != str[length - j - 1])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            printf("Case #1: Not Palindrome\n");
        }
        else
        {
            if (length > 7)
            {
                printf("Case #2: %c%d%c\n", str[0], length - 2, str[length - 1]);
            }

            if (length <= 7)
            {
                printf("Case #3: %s\n", str);
            }
        }
    }
    return 0;
}

