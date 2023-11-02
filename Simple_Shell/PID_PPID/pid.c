#include <stdio.h>
#include <unistd.h>

/**
 * main - returns PID
 *
 * Return: Always 0
 */

int main(void)
{
pid_t my_pid;

my_pid = getpid();
printf("%u\n", my_pid);
return (0);
}


// Note that in the example above that everytime you run the program a new process is created and its ID is different.
// Each process has a parent: the process that created it. It is possible to get PID of a parent process by using the getppid system call from within the process 
