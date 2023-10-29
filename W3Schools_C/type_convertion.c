#include <stdio.h>

int main(void)
{
float myFloat = 9;

printf("%f\n", myFloat);
return (0);        // The compiler automatically converts 9 to a float which is 9.0000 This is implicit type conversion
}

// Type convertion is the converting of a value of one data type to another. The two types of type conversion in C are Implicit and Explicit. Implicit means automatically and Explicit means manually
//
// Implicit conversion is done directly by the computer when you asign a value of one type to another.
