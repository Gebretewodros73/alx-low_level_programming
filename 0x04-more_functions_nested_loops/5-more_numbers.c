#include "main.h"
/**
 * more_numbers - alphabet in order ten times
 * Return: void
 */

void more_numbers(void)
{
	char t, u;

	for (u = 1; u <= 10; u++)
	{
		for (t = 0; t <= 14; t++)
		{
			if (t > 9)
			{
				_putchar((t / 10) + '0');
			}
			_putchar((t % 10) + '0');
		}
		_putchar('\n');
	}
}
