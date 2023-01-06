#include "main.h"
/**
 * _memset - prints pointers
 * @s: pointer
 * @b: beffer
 * @n: randome
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for ( ; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
