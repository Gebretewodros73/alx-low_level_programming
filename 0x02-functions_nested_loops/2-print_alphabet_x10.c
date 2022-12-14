#include "main.h"
/**
 * print_alphabet - alphabet in order ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char t, u;

	for (u = 'a'; u <= 'j'; u++)
	{
		for (t = 'a'; t <= 'z'; t++)
		{
			_putchar(t);
		}
		_putchar('\n');
	}
}
