#include "main.h"
#include<stdio.h>
/**
 * puts_half - prints the othe half
 * @str: the character to be ordered
 * Return: Anything
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (*(str + i) != '\0')
	{
		i++;
	}
	j = i;
	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i - 1) / 2;
	while (i <= j-1)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
