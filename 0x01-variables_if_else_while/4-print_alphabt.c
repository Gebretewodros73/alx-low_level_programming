#include<stdio.h>
/**
 * main - print lower exept q and e
 * Return: returns zero
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
