#include "main.h"
/**
 * _isdigit - detect digit
 * @c: digit to be detected
 * Return: 1 and 0
 */
int _isdigit(int c)
{
	if ('9' >=  c && '0' <= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

