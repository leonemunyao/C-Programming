#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

/* Variable Declaration */
extern int a, b;
extern int c;
extern float f;

int main(void)
{
int a, b;
int c;
float f;

/* Actual values */
a = 5;
b = 6;
c = a + b;
printf("The value of c is %d\n", c);
f = 55.76/66.9;
printf("The value of f is %f\n", f);
printf("\n");
return (0);
}
