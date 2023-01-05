#include "main.h"
/**
 * _print_rev_recursion - print the revers
 * @s: string input
 * Return: the revers string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
