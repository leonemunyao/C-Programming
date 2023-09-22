#include <stdio.h>

void func(void)
static int count = 5; /* global static variable */
main(void)
{
while (count--)
{
func();
}
return (0);
}

void func(void)
{
static int count = 5; /* local static variable */
i++;
prntf("i is %d and count is %d\n", i, count);
}
