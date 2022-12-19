#include "main.h"
/**
 *rev_string - print revers
 *@s: string to count
 *Return: the length of string
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char r[100];

	while (*(s + i) != '\0')
	{
		r[i] = *(s + i);
		i++;
	}
	while (i - 1 >= 0)
	{
		*(s + i - 1) = r[j];
		j++;
		i--;
	}
}
