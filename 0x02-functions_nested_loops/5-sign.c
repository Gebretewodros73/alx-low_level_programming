#include "main.h"
/**
 * print_sign - print sign of a number
 * Return: 1, 0 and -1.
 */
int print_sign(int g)
{

	if (g > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (g < 0)
	{
		_putchar('-');
		return (-1);
	}
	else 
	{
		_putchar('0');
		return (0);
	}
}

