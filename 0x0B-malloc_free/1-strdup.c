#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * _strdup - array for prints a string
 * @str: array of elements
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *d;
	unsigned int s;

	if (str == 0)
	{
		return (NULL);
	}
	s = strlen(str) + 1;
	d = (char *) malloc(s * sizeof(char));
	if (d == 0)
	{
		return (NULL);
	}
	strcpy(d, str);
	return (d);
}
