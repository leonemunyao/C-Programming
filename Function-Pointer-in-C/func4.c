#include <stdio.h>

// two simple functions
void fun1() { printf("My name is Leone Munyao \n"); }
void fun2() { printf("I will be an ALX Software Engineering Graduate next year\n"); }

// A function that receives a simple function
// as parameter and calls the function
void wrapper(void (*fun)())
{
fun();
}

int main()
{
wrapper(fun1);
wrapper(fun2);
return (0); 
}

// We use function pointers to avoid code redundancy
// 
