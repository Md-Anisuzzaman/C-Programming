/*You have given a string. Now your task is to sort this string in descending order. Implement this using function.
Sample Input 1
abddccss

Sample Output 1
ssddccba

 */

#include <stdio.h>
#include <string.h>

char des_sort_string(int i, int j, int len, int temp, char str[]);

int main()
{
    char str[100];
    char temp;
    int len, i, j;
    // scanf("%s",str);
    gets(str);
    len = strlen(str);
    char result = des_sort_string(i, j, len, temp, str);
    printf("%s", str);
    return 0;
}

char des_sort_string(int i, int j, int len, int temp, char str[])
{
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len - 1; j++)
        {
            if (str[j] >= 97 && str[j] <= 122)
            {
                if (str[j + 1] >= 97 && str[j + 1] <= 122)
                {
                    if (str[j] < str[j + 1])
                    {
                        temp = str[j];
                        str[j] = str[j + 1];
                        str[j + 1] = temp;
                    }
                }
            }
            if (str[j] >= 65 && str[j] <= 90)
            {
                if (str[j + 1] >= 65 && str[j + 1] <= 90)
                {
                    if (str[j] < str[j + 1])
                    {
                        temp = str[j];
                        str[j] = str[j + 1];
                        str[j + 1] = temp;
                    }
                }
            }
        }
    }
    return str;
}