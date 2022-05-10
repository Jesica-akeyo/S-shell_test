#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints $, waits for the user to enter a command
 * prints it in the next line
 *
 * Return: 0
 */
int main(void)
{
	int i;
	size_t size = 1024;
	char **buf;

	buf = malloc(sizeof(char *) * size);

	printf("$");
	getline(buf, &size, stdin);

	for (i = 0; buf[i] != NULL; i++)
		printf("%s", buf[i]);

	free(buf);
	return (0);
}
