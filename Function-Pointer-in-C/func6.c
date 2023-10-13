#include <stdio.h>

// We aslo have pointers to functions. They are easy ...simply write a declaration as it would be for a function 
// say int func(int a, float b) and simply put a star infront of it like the below
// int *func(int a, float b)  .....this is a function returning pointer to int *\
// Pointer to a function returning int *\ will be as follows
// int (*func)(int a, float b) 
#include <stdlib.h>

void func(int);

int main()
{
void (*fp)(int);

fp = func;
(*fp)(1);
fp(2);

exit(EXIT_SUCCESS);
}

void
func(int arg)
{
printf("%d\n", arg);
}
