#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints all arguments without ac
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int i;

	for (i = 0; av[i] != NULL; i++)
		printf("%s\n", av[i]);
}
