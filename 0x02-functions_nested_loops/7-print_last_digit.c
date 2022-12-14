#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @r:digit entered
 * Return: value of last digit
 */
int print_last_digit(int r)
{
	r = r % 10;
	if (r < 0)
	{
		r = -1 * r;
	}
	_putchar(r + '0');
	return (r);
}
