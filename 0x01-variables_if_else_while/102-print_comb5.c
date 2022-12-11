#include<stdio.h>
/**
 * main - Combination of single -digit
 * Return: returns zero
 */
int main(void)
{
	int n, m, o, p, i;

	for (n = 0; n <= 9; n++)
	{
		if (n != 9)
		{
			i = 9;
		}
		else
		{
			i = 8;
		}
		for (m = 0; m <= i; m++)
		{
			if (m != 9)
			{
				p = m + 1;
			}
			else
			{
				p = 0;
			}
			for (o = n; o <= 9; o++)
			{
				for (; p <= 9; p++)
				{
						putchar((n % 10) + '0');
						putchar((m % 10) + '0');
						putchar(' ');
						putchar((o % 10) + '0');
						putchar((p % 10) + '0');
						putchar(',');
						putchar(' ');
				}
			p = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
