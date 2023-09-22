#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main()
{
    int i;
    i = 0;    // variable declaration
    printf("Enter a character");
    scanf("%d", & i);  // user input
    printf("The ascii value of the ch variable is : %d\n", i);
    return 0;
}
