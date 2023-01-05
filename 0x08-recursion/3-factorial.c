#include "main.h"
/**
 * factorial - factorial of a number
 * @n: given number
 * Return: the factorial of a number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);
	return (n + factorial(n - 1));
}
