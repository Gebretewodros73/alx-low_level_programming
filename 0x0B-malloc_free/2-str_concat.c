#include "main.h"
#include<string.h>
#include<stdlib.h>
/**
 * str_concat - back a pointer or array
 * @s1: Array one
 * @s2: Array two
 * Return: Always an array dinamic
 */
char *str_concat(char *s1, char *s2)
{
	char *d;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = (strlen(s1) + strlen(s2) + 1);
	d = (char *) malloc(size * sizeof(char));

	if (d == 0)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(d + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(d + i) = *(s2 + j);
		i++;
	}
	return (d);
}
