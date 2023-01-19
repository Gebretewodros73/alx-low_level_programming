#include "main.h"
/**
 * print_number - print of a number
 * @n: number to be printed
 * Return: return Anything
 */
void print_number(int n)
{
	int count, i, j;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}
	else
	{
		i = n;
	}
	j = i;
	count = 1;
	while (j > 9)
	{
		j = j / 10;
		count = count * 10;
	}
	for (; count >= 1; count = count / 10)
	{
		_putchar(i / count % 10 + '0');
	}
}

