#include "main.h"
#include<stdio.h>
/**
 * _strcpy - prints the othe half
 * @src: the character to be ordered
 * @dest:array returned
 * Return: Anything
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = *(src + i);
		i++;
	}
return (dest);
}
