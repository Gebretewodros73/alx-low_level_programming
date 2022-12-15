#include "main.h"
/**
 * print_numbers - print 0 to 9.
 * Return: values
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c != 2 && c != 4)
			_putchar('0' + c);
		c++;
	}
	_putchar('\n');
}
