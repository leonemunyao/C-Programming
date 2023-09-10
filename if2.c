#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
int a;
a = 100;
if (a < 20)
{
printf("%d is not less than 20\n", a);
}
else if (a == 20)
{
printf("%d is equal to 20\n", a);
}
else if (a > 20)
{
printf("%d is greater than 20\n", a);
}
printf("The value of a is %d\n", a);
return (0);
}
