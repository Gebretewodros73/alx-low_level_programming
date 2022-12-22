#include "main.h"
/**
 * print_number - print of a number
 * @n: number to be printed
 * Return: return Anything
 */
void print_number(int n)
{
	int s, i, j = 1;

	if (n < 0)
	{
		_putchar('-');
		s = n * -1;
	}
	else
		s = n;
	i = s;
	while (i > 9)
	{
		i = i / 10;
		j = j * 10;
	}
	for (; j >= 1; j = j / 10)
	{
		_putchar((s / j) % 10 + '0');
	}
}

