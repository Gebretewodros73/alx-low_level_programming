#include "main.h"
/**
 * _strlen_recursion - counts a string
 * @s: a string to be count
 * Return: the amount
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
