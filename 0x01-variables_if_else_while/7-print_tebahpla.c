#include<stdio.h>
/**
 * main - alphabates in a reverse
 * Return: returns zero
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
