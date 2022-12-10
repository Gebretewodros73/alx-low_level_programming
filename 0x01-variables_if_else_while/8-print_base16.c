#include<stdio.h>
/**
 * main - print starting from zero
 * Return: returns zero
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
		putchar('\n');
	return (0);
}
