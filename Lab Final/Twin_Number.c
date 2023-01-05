#include <stdio.h>

int main()
{
    int N, S, Twin_number;
    
    scanf("%d%d", &N, &S);

    if (N % 2 == 0 && S % 2 == 0)
    {
        Twin_number = (S - N) / 2;
    }

    printf("%d", Twin_number);

    return 0;
}