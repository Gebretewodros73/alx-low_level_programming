#include "main.h"
/**
 * print_diagonal - alphabet in order ten times
 * @n:number of line
 * Return: void
 */

void print_diagonal(int n)
{
	int u, i;

	for (u = 1; u <= n; u++)
	{
		for (i = 1; i <= u; i++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
		_putchar('\n');
}
