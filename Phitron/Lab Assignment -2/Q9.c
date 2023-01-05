
#include <stdio.h>
int prime_count(int n, int arr[]);
float average_count(int n, int arr[]);

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Prime numbers: %d\n", prime_count(n, arr));
    printf("Average of all even integers: %0.2f", average_count(n, arr));

    return 0;
}

int prime_count(int n, int arr[])
{
    int j;
    int count = 0;
    for (j = 0; j < n; j++)
    {
        if (arr[j] == 1){
            printf("Please input greater than 1 number\n");
            return 0;
        }

        if (arr[j] % 2 != 0)
        {
            count = count + 1;
        }
    }
    printf("all count =  %d \n", count);
    return count;
}

float average_count(int n, int arr[])
{
    int *ptr, i, sum = 0;
    float avg = 0;

    for (ptr = arr; ptr < arr + n; ptr++)
    {
        sum += *ptr;
    }

    avg = sum / n;

    return avg;
}