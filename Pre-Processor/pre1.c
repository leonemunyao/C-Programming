#include <stdio.h>

int X;
#define PI 3.14
#define SQR(X) (X*X)
#define DEMO(X) X+X

int main()
{
int area;
int n = SQR(X);
area = PI * 4 * 4;
int m = DEMO(4) * DEMO(5);
printf("Area = %d\n", area);
printf("%d\n", n);
printf("%d\n", m);
}
