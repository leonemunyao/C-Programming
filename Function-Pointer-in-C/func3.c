#include <stdio.h>

void add(int a, int b)
{
printf("Addition is %d\n", a+b);
}

void subtract(int a, int b)
{
printf("Subtraction is %d\n", a-b);
}

void multiply(int a, int b)
{
printf("Multiplication is %d\n", a*b);
}

int main()
{
void (*fun_ptr[])(int, int) = {add, subtract, multiply};
unsigned int ch, a = 20, b = 15;
printf("Enter choice: 0 for add, 1 for subtract and 2 for multiply\n");
scanf("%d", &ch);

if (ch > 2) return (0);

(*fun_ptr[ch])(a, b);

return (0);
}
