#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * forkexample - forks
 *
 * Return: Always 0
 */
void forkexample(void)
{
	if (fork() == 0)/*child process*/
		printf("Hello from child\n");
	else /*parent process since return != 0*/
		printf("Hello from parent\n");
}
/**
 * main - fork example
 *
 * Return: Always 0
 */
int main(void)
{
	forkexample();
	return (0);
}
