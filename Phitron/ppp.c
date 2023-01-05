// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int n, i;
//     char str[100];
//     scanf(" %s%d", str, &n);
//     int len = strlen(str);

//     for (i = 0; i < len; i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             if (str[i] == 'y')
//             {
//                 str[i] = str[i] +(n - 26);
//             }
//             else
//             {
//                 str[i] = str[i] + n;
//             }
//         }
//     }
//     printf("%s", str);

//     return 0;
// }




#include <stdio.h>
#include <string.h>

int main()
{
    char string[50];
    int n;
    gets(string);
    scanf("%d", &n);
    int i = 0;
    while (string[i] != '\0')
    {
        printf("%c", string[i] + n);
        i++;
    }
    return 0;
}
