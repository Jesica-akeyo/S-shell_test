#include<stdio.h>
#include<string.h>

int main()
{
	char string[50] = "Hello World!";
	//extract the first token
	char *token = strtok(string, " ");
	printf("%s\n", token); //print the token
	return 0;
}
