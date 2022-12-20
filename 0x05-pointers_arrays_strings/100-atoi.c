#include "main.h"
#include<stdio.h>
/**
 * _atoi - prints the othe half
 * @s: the character to be ordered
 * Return: Anything
 */
int _atoi(char *s)
{
	int si = 1, n = 0, i = 0;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			si = si * -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
	}
	si = si * -1;
	return (n * si);
}
