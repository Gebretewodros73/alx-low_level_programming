#include "main.h"
/**
 *_puts - length of string
 *@str: string to count
 *Return: the length of string
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
