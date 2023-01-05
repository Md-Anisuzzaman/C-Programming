#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int result = sum(400, 100);
    printf("%d", result);
}