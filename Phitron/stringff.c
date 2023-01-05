// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[100], fre[100], str2[100];

//     int i, j, c, n, len, ind = 0;

//     scanf("%s", str);
//     len = strlen(str);

//     for (i = 1; i < len; i++)
//     {
//         for (j = 0; j < len - i; j++)
//         {
//             if (str[j] = str[j + 1])
//             {
//                 str2[ind++] = str[j];
//             }
//             else{

//                 str2[j] = str[j];
//             }
//         }
//     }

//     for (i = 1; i < len; i++)
//     {
//         printf("%c",str2);
//     }

//     return 0;
// }

// #include <stdio.h>

// #include <string.h>

// int main()
// {
//     char str[100], fre[100];

//     int i, j, c, n, len;

//     scanf("%s", str);
//     len = strlen(str);

//     for (i = 1; i < len; i++)
//     {
//         for (j = 0; j < len - i; j++)
//         {
//             if (str[j] > str[j + 1])
//             {
//                 char temp = str[j];
//                 str[j] = str[j + 1];
//                 str[j + 1] = temp;
//             }
//         }
//     }

//     printf("%s", str);

//     return 0;
// }

#include <stdio.h>
int main() {
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);

    return 0;
}