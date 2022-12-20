#include "main.h"
#include<stdio.h>
/**
 * _strcpy - prints the othe half
 * @src: the character to be ordered
 * @dest:array returned
 * Return: Anything
 */
int _atoi(char *s)
{
	int si = 1, n = 1, i = 0, j = 0, m = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
			si = si * -1;
	}
	while (*(s + i) != '\0')
	{
		if (*(s + i) <= '9' && *(s + i) >= '0')
		{
			if (j == 0)
			{
				n = *(s + i) * n;
			}
			else
			{
				n = n * 10;
				n = *(s + i) * n;
			}
			m = n + m;
			j++;
		}
	}
	m = si * m;
	return (m);
}
