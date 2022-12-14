#include "main.h"
/**
 * jack_bauer - prints minute
 * Return: returns hour and minutes
 */
void jack_bauer(void)
{
	int r, s;

	for (r = 0; r <= 23; r++)
	{
		for (s = 0; s <= 59; s++)
		{
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
		}
	}
}
