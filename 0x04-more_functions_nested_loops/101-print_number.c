#include "main.h"
/**
 * print_number - print of a number
 * @n: number to be printed
 * Return: return zero
 */
void print_number(int n)
{
	int s = n, i, j = 1;

	if (s < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	i = n;
	while (i > 9)
	{
		i = i / 10;
		j = j * 10;
	}
	for (; j >= 1; j = j / 10)
		_putchar((n / j) % 10 + '0');
}

