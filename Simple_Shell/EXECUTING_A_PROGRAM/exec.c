#include <stdio.h>
#include <unistd.h>

/**
 * main - execve allows a process to execute another program
 *
 * Return: Always 0
 */

int main(void)
{
char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

printf("Before execve\n");
if (execve(argv[0], argv, NULL) == -1)
{
perror("Error:");
}

printf("After execve\n");
return (0);
}

// In this example execve is used without the current environment(last argument), don't forget to add it in yor shell
