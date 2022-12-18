#include "main.h"
/**
 * print_triangle - cube with #
 * @size :number of line
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, a;

	for (j = 1; j <= size; j++)
	{
		for (i = 1; i <= size; i++)
		{
			a = size - i;
			if (j <= a)
				_putchar(' ');
			else
				_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
