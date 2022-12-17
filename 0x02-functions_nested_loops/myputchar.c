#include "main.h"
/**
 * print_to_98 - all numbers to 98.
 * @n: number to start from
 * Return: return numbers to 98.
 */
void print_to_98(int n)
{
	int b, a, j;

	if (n < 98)
	{
		b = 98;
		a = n;
	}
	else
	{
		b = n;
		a = 98;
	}
	while (a <= b)
	{
		if (9 >= a && a >= -9)
			_putchar('0' + a);
		else if (99 >= a && a >= -99)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		else
		{
			j = a % 10;
			_putchar((a / 100) + '0');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
			if (a != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
	a++;
	}
	_putchar('\n');
}
