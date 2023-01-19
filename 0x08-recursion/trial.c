#include "main.h"
/**
 * __sqrt_recursion - counts a string
 * @n: a string to be count
 * Return: the amount
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if ((_sqrt_recursion(n) * _sqrt_recursion(n)) > n)
		return (-1);
	else if ((_sqrt_recursion(n) * _sqrt_recursion(n)) == n)
		return (_sqrt_recursion(n));
	else
		return (1 + _sqrt_recursion(n));

}
