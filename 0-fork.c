#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * main - creates new child processes
 *
 * Return: Always 0
 */
int main(void)
{
	fork();
	printf("Hello world!\n");
	return (0);
}
