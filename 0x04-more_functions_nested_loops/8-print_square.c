#include "main.h"
/**
 * print_square - cube with #
 * @size :number of line
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	for (j = 1; j <= size; j++)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
