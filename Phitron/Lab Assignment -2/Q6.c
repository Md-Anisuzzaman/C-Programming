/*
You are given an array of size n . And the next line will contain n positive integers. Now you need to tell how many numbers are divisible by 3 and divisible by 5. For this you need to write two functions , First one is for finding whether a number is divisible by 3 or not and the second one is for finding whether a number is divisible by 5 or not. See the sample input/output and explanation for more clarification.

Print the total count of how many numbers are divisible by 3 and divisible by 5 if there are no such numbers then return -1 from the functions,and that time print -1 only once(see the sample input and output)

Note - if a number is divisible by both 3 and 5,then consider it only once.

Constraints-
1<=n<=100
Values of array will be given between 1-1000

Sample Input 1- 						Sample Output 1-
5										3
10 1 13 3 9 							Sample Output 2-
Sample Input 2- 							5
7
13 9 9 25 6 17 30
Sample Input 3- 							Sample Output 3-
2
2 11										 -1

Explanation -
In sample input 1 -
10 is divisible by 5
3 and 9 is divisible by 3
Total count = 3

In sample input 2 -
9 is divisible by 3 , there are two 9 exist
6 is divisible by 3
25 is divisible by 5
30 is divisible by both 3 and 5 , so you must consider it only once.
Total count  = 5
*/
/*
You are given an array of size n . And the next line will contain n positive integers. Now you need to tell how many numbers are divisible by 3 and divisible by 5. For this you need to write two functions , First one is for finding whether a number is divisible by 3 or not and the second one is for finding whether a number is divisible by 5 or not. See the sample input/output and explanation for more clarification.

Print the total count of how many numbers are divisible by 3 and divisible by 5 if there are no such numbers then return -1 from the functions,and that time print -1 only once(see the sample input and output)

Note - if a number is divisible by both 3 and 5,then consider it only once.

Constraints-
1<=n<=100
Values of array will be given between 1-1000

Sample Input 1- 						Sample Output 1-
5										3
10 1 13 3 9 							Sample Output 2-
Sample Input 2- 							5
7
13 9 9 25 6 17 30
Sample Input 3- 							Sample Output 3-
2
2 11										 -1

Explanation -
In sample input 1 -
10 is divisible by 5
3 and 9 is divisible by 3
Total count = 3

In sample input 2 -
9 is divisible by 3 , there are two 9 exist
6 is divisible by 3
25 is divisible by 5
30 is divisible by both 3 and 5 , so you must consider it only once.
Total count  = 5
*/

#include <stdio.h>

int div_By_Three(int n, int numbs[], int i, int count);
int div_By_five(int n, int numbs[], int i, int count);
int div_By_both(int n, int numbs[], int i, int count);

int main()
{

    int n, i;
    int count = 0;
    int threeCount = 0;
    int fiveCount = 0;
    int both = 0;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    threeCount = div_By_Three(n, arr, i, count);
    fiveCount = div_By_five(n, arr, i, count);
    both = div_By_both(n, arr, i, count);


    if (threeCount > 0 && fiveCount > 0)
    {
        count = threeCount + fiveCount - both;
        printf("%d", count);
    }
    if (threeCount == -1 && fiveCount == -1 && both == 0)
    {
        count = -1;
        printf("%d", count);
    }

    return 0;
}

int div_By_Three(int n, int numbs[], int i, int count)
{
    for (i = 0; i < n; i++)
    {
        if (numbs[i] % 3 == 0)
        {
            count++;
        }
    }

    if (count > 0)
    {
        return count;
    }
    else
    {
        return -1;
    }
}

int div_By_five(int n, int numbs[], int i, int count)
{
    for (i = 0; i < n; i++)
    {
        if (numbs[i] % 5 == 0)
        {
            count++;
        }
    }

    if (count > 0)
    {
        return count;
    }
    else
    {
        return -1;
    }
}

int div_By_both(int n, int numbs[], int i, int count)
{
    for (i = 0; i < n; i++)
    {
        if (numbs[i] % 3 == 0 && numbs[i] % 5 == 0)
        {
            count++;
        }
    }
    if (count >= 0)
    {
        return count;
    }
    else
    {
        return -1;
    }
}