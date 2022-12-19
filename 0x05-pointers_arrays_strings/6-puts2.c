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
		if (*(str + i) <= 9 && *(str + i) >= 0)
			_putchar('0' + *(str + i));
		else
			_putchar(*(str + i));
		_putchar('\n');
		i++;
	}
}
