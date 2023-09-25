#include <stdio.h>

/**
 * main - Store the address of a variable to a pointer
 *
 * Return: Always o
 */

int main(void)
{
int i;
int *p;

i = 100;
p = &i;

printf("The address of 'n' is %p\n", &i);
printf("The value of 'p'is the address of 'i' which is: %p\n", p);
return (0);
}
