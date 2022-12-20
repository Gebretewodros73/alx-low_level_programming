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
	int a, su = 0, i = 0,j = 0, n = 1, m [100], l = 1;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
			n = *(s + i) * n;
		else if (*(s + i) <= 9 && *(s + i) >= 0)
		{
			m[j] = *(s + i);
			j++;
		}
		i++;
	}
	a = j;
	j = 0;
	while (j <= a)
	{
		l = l * 10;
		m[j] = l * m[j];
		su = su + m[j];
		j++;
	}
return (su);
}
