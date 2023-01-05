#include "main.h"
/**
 * _pow_recursion - the power of a number
 * @x: base
 * @y: power
 * Return: the power of number
 */
int _pow_recursion(int x, int y)
{
	int s = 1;

	if (y < 0)
	{
		s = y;
		y = -1 * y;
	}
	if (y == 0)
		return (1);
	if (s < 0)
		return (1/(x * _pow_recursion(x,y - 1)));
	else
		return (x * _pow_recursion(x,y - 1));
}
