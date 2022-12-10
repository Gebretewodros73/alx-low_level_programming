#include<stdio.h>
/**
 * main - Combination of single -digit
 * Return: returns zero
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n != 9)
		{
			putchar(',');
		}
	}
		putchar('\n');
	return (0);
}
