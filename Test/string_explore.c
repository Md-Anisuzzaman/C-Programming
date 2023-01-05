/*

///// String lentgth find to check how many string there

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Phitron";
    int length =strlen(str);

    for (int i = 0; i < length; i++)
    {
        printf("%c ", str[i]);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    scanf("%s", str);
    int length = strlen(str);
    printf("%d\n", length);

    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c ", str[i]);
        i++;
    }
    return 0;
} */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%d", str);
    int length = strlen(str);

    // int i = length - 1;
    // while (str[i] != '\0')
    // {
    // 
    //     i--;
    // }

    for (int i = length - 1; i >= 0; i--)
    {
            printf("%c ", str[i]);
    }
    return 0;
}