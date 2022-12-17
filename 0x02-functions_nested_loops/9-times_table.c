#include "main.h"
/**
 * times_table - times table print
 * Return: return time table value
 */
void times_table(void)
{
	int i, j, t;

	t = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			t = i * j;
			if (t <= 9)
			{
				if (j != 0)
				{
					_putchar(32);
					_putchar(32);
				}

				_putchar((t % 10) + '0');
				if (j != 9)
					_putchar(44);
			}
			else
			{
				if (j != 0)
					_putchar(32);
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
				if (j != 9)
					_putchar(44);
			}
		}
		_putchar('\n');
	}
}

