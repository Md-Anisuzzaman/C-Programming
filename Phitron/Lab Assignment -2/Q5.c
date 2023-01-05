/*
You are given a positive integer n .The second line will contain n positive integers.
Write a function that will take an integer array as an argument and return the sum in the following way.
>> If the index is odd and at the same time the value is odd then you can add the index and values
>> If the index is even and at the same time the value is even then you can add the index and values

Return the total sum from the function. If there is no such value which is mentioned in the above then return 0 from the function.
See the sample input ,output and explanation for more clarification.

Constraints-
1<=n<=100
Values of array will be given between 1-1000

Sample Input 1:							Sample Output 1:
6									       	    22
12 19 3 1 6 10
Sample Input 2:							 Sample Output 2:
8
12 6 1 3 4 2 2 3             				    20

Explanation -
In sample input -1
3rd index means index = 3 and the value is 3 , index+value=3+3=6
6the index means index = 6 and the value is 10 , index+value=6+10=16
Total = 22
*/

#include <stdio.h>

int sum_of_odd_and_even(int n, int result, int j, int numbs[]);

int main()
{
  int n, i;
  int sum = 0;
  scanf("%d", &n);
  int arr[n];

  for (i = 1; i <= n; i++)
  {
    scanf("%d", &arr[i]);
  }

  sum = sum_of_odd_and_even(n, sum, i, arr);
  printf("%d", sum);

  return 0;
}

int sum_of_odd_and_even(int n, int result, int j, int numbs[])
{

  for (j = 1; j <= n; j++)
  {

    if ((j % 2 == 0 && numbs[j] % 2 == 0) && (j % 2 != 0 && numbs[j] % 2 != 0))
    {
      return 0;
    }
    if (numbs[j] == 0)
    {
      return 0;
    }

    if (j % 2 == 0 && numbs[j] % 2 == 0)
    {
      result = result + j + numbs[j];
    }
    if (j % 2 != 0 && numbs[j] % 2 != 0)
    {
      result = result + j + numbs[j];
    }
  }
  return result;
}