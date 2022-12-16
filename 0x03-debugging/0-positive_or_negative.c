#include "main.h"
/**
 * positive_or_negative - print postive negative and zero
 * @i: intiger
 * Return: returns zero
 */
void positive_or_negative(int i)
{

	if (i > 0)
	{
		_printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		_printf("%d is zero\n", i);
	}
	else
	{
		_printf("%d is negative\n", i);
	}

	return (0);
}
