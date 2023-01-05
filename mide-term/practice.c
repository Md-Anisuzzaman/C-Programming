#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], temp[100], rev[50];
    int i, j = 0;
    gets(str);

    int len = strlen(str);

    for (i = 0; str[i] != '\0'; ++i)
    {
        temp[i] = str[i];
    }

    temp[i] = '\0';

    for (i = len - 1; i >= 0; i--)
    {
        rev[j++] = temp[i];
    }
    if (str && rev == 0)
    {
        printf("hello");
    }

    return 0;
}