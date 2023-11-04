#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * main - prints the PID of the parent process
 *
 * Return: Always 0
 */

int main(void)
{
pid_t my_ppid;
my_ppid = getppid();
printf("%u\n", my_ppid);
return (0);
}

// In this program to get the PID of the parent process, we will use getppid () system call
