#include <stdio.h>

int main(void)
{
char a, b, c;
int age;
printf("Enter the initials followed by your age: ");
scanf("%c %c %c %d", &a, &b, &c, &age);
printf("My initials are: %c%c%c and my age is %d.\n", a,b,c,age);
return (0);
}
