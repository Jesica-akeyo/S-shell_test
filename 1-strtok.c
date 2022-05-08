#include<stdio.h>
#include<string.h>

int main()
{
	char string[50] = "let us learn about strtok";
	//extract the first token
	char *token = strtok(string, " ");
	//loop the string to extract all other tokens
	while (token != NULL){
		printf("%s\n", token);
	token = strtok(NULL, " ");
	}
	return (0);
}
