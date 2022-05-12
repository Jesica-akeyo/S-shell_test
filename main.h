#ifndef MAIN_H
#define MAIN_H

void displaywords(char *WordArray[], int numWords);
int countSpaces(char theString[]);
char **splitString(char theString[], int *arraySize);
char *_getline(void);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);

#endif
