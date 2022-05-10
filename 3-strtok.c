#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - strtok
 *
 * Return: 0
 */
int main(void)
{
	int j, i = 0;
	char str[80] = "hello-world-gunaydin bebegim";
	char *delim = "-";
	char *res;
	char *words[20];

	/*get first token*/
	words[i++] = strtok(str, delim);

	/*get all other token*/
	while ((res = strtok(NULL, delim)))
		words[i++] = res;

	/*print all token*/
	for (j = 0; j < i; j++)
		printf("%s\n", words[j]);

	return (0);
}

