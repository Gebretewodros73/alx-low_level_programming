#include "main.h"
/**
 * print_number - print of a number
 * @n: prime number of n
 * Return: return zero
 */
void print_number(int n)
{
	int s = n, m = n / 10, o = n / 100, p = n % 1000, q = p % 100;

	if (s < 0)
		n = n * -1;
	if (n > 999) {
		if (s < 0)
			_putchar('-');
		_putchar(o / 10 + '0');
		_putchar(o % 10 + '0');
		_putchar(m % 100 + '0');
		_putchar(q % 10 + '0');
	}
	else if (n > 99) {
		if (s < 0)
			_putchar('-');
		_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
		_putchar(n % 100 + '0');
	}
	else if (n > 9)
	{
		if (s < 0)
			_putchar('-');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		if (s < 0)
			_putchar('-');
		_putchar('0' + n);
	}
	_putchar('\n');
}
