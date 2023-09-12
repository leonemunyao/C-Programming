#include <stdio.h>

/**
 * main - entry point
 * 
 * Return: Always 0
 */

/* Function Declaration */

int max(int num1, int num2);

int main()
{

/* local variable definition */
int a = 200;
int b = 500;
int ret;

/* Calling a function to get max value */
ret = max(a, b);

printf("Max value is : %d\n", ret);
return (0);
}

/* function returning max value between two numbers */

int max(int num1, int num2)
{

/* local variable declaration */
int result;

if (num1 > num2)
{
return num1;
}
else
{
return num2;
}
return result;
}
