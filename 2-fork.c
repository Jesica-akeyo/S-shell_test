#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * main - forks
 *
 * Return: Always 0
 */
int main(void)
{
	pid_t pid, child_pid;

	printf("Before fork:\n");

	pid = getpid();
	printf("My pid is: %u\n", pid);

	child_pid = fork();

	printf("After fork:\n");
	pid = getpid();
	printf("My pid is: %u\n", pid);
	printf("My Child_pid is: %u\n", child_pid);

	return (0);
}
