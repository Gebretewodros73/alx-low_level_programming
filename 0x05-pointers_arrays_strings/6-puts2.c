#include "main.h"
/**
 * puts2 - prints inorder
 * @str: the character to be ordered
 * Return: Anything
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
