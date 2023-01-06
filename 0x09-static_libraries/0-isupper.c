#include "main.h"
/**
 * _isupper - check for upper case
 * @c: upper case characters
 * Return: 1 for upper case and 0 for all.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
