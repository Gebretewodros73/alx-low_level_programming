#include "main.h"
/**
 * suport - cherck if sqrt
 * @nu: number
 * @p: possible
 * Return: to sqrt_recursion
 */
int suport(int nu, int p)
{
	if ((p * p) == nu)
	{
		return (p);
	}
	else
	{
		if ((p * p) > nu)
			return (-1);
		else
			return (suport(nu, p + 1));
	}
}
/**
 * _sqrt_recursion - counts a string
 * @n: a string to be count
 * Return: the amount
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (suport(n, 0));
}
