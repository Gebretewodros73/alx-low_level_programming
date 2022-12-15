#include "main.h"
/**
 * print_to_98 - all numbers to 98.
 * @n: number to start from
 * Return: return numbers to 98.
 */
void print_to_98(int n)
{
	int i, j;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (9 >= i && i >= -9)
			{
				_putchar((i % 10) + '0');
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if ((99 >= i && i >= 9) || (-9 >= i && i >= -99 ))
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			 else
                        {
                                _putchar((i / 100) + '0');
                                j = i / 10;
                                _putchar((j % 10) + '0');
                                _putchar((i % 100) + '0');
                                if (i != 98)
                                {
                                        _putchar(',');
                                        _putchar(' ');
                                }
                        }

		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (9 >= i && i >= -9)
			{
				_putchar((i % 10) + '0');
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (99 >= i && i >= -99)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
                                _putchar((i / 100) + '0');
				j = i / 10;
				_putchar((j % 10) + '0');
                                _putchar((i % 100) + '0');
                                if (i != 98)
                                {
                                        _putchar(',');
                                        _putchar(' ');
                                }
			}
		}
	}
	_putchar('\n');
}



