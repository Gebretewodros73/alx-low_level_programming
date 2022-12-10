#include<stdio.h>
/**
 * main - Combination of single -digit
 * Return: returns zero
 */
int main(void)
{
	int n;
	int m;
	int o;

	for (n = 0; n <= 7; n++)
	{
		for (m = n + 1; m <= 8; m++)
		{
			for (o = m + 1; o <= 9; o++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((o % 10) + '0');
				if (n != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
		putchar('\n');
	return (0);
}
