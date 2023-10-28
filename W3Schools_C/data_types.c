#include <stdio.h>

int main(void)
{
char* myName = "Leone";
char* myProfession = "Software Engineer";
float mySalary = 19000000.00;
char* myWorkPlace = "Microsoft and Google";

printf("My name is %s. I am a %s at %s. I earn %.2f per month which is my basic salary excluding my allowances.\n", myName, myProfession, myWorkPlace, mySalary);
return (0);
}


// Basic data types include int 4 bytes, float 4 bytes, double 8 bytes, char 1 byte. We also have Basc format specifiers for each data type. For int we have %d or %i. For float we have %f
// for double we have %lf, for char we have %c. For strings we have %s. You can set a decimal precision in a float like the example above.
