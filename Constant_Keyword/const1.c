#include <stdio.h>

int main(void)
{
const int length = 40;
const int width = 60;
const char newline = '\n';
int area;
area = length * width;
printf("The area is %d", area);
printf("%c", newline);
return (0);
}
