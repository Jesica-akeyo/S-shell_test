#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * displaywords - displays words
 * @WordArray: character
 * @numWords:integer
 * Return: void
 */
void displaywords(char *WordArray[], int numWords)
{
	if (WordArray != NULL)
	{
		int i;

		for (i = 0; i < numWords; i++)
			printf("%i. \"%s\"\n", i + 1, WordArray[i]);
	}
}

/*
 * countSpaces - counts spaces
 *
 * @theString: char
 *
 * Return: Always 0
 */
int countSpaces(char theString[])
{
	int spaces = 0;

	len = strlen(theString);

	for (int i = 0; i < len; i++)
	{
		if (theString[i] == ' ')
		{
			spaces++;
		}
	}
	return (spaces);
}

/*
 * splitString - splits string
 *
 * @theString: char
 * @arraySize: size of array
 *
 * Return: Always 0
 */
char **splitString(char theString[], int *arraySize)
{
	int i, x, y = 0;

	int start, end = 0; /*index*/
	char *word; /*create an array with char as elements*/
	char **words;

	int stringLen = strlen(theString);

	int numOfWords = countSpaces(theString) + 1;
	*arraySize = numOfWords;
	word = (char *)malloc(stringLen + 1);
	words = malloc(numOfWords * sizeof(char *));

	for (x = 0; x < stringLen; x++)
	{
		if (theString[x] == ' ' || theString[x] == '\0')
		{
			for (x = start; x <= end; x++)
			{
				word[y] = theString[x];
				y++;

			strcpy(words[i], word); /*copy the substring into words*/
			words[i] = (char *)malloc(strlen(word) + 1);

			i++;
			free(word);
			start = end + 2;/*next start is the element right after the space*/
			end = end + 2;/*do the same on end index*/
			}
		}
		else/*when theString[x] 1= ' '*/
		{
			end++;
		}
}
words[*arraySize] == '\0';
return (words);
}
/*
 * main - test function
 *
 * Return: Always 0
 */
int main(void)
{
	int size;
	char test[] = "it is a cat";
	char **words = splitString(test, &size);

	displayWords(words, size);

	return (0);
}
