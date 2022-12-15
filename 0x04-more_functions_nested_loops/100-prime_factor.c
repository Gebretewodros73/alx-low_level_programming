#include<stdio.h>
/**
 * main - print prime factor of a number
 * Return: return zero
 */
int main(void)
{
	long int i, j, t;

	i = 612852475143;
	for (j = 2; j <= i; j++)
	{
		t = i % j;
		if (t == 0)
		{
			if (i != j)
			{
				printf(" %ld,", j);
				i = i / j;
				j = j - 1;
			}
			else
			{
				printf("\b and %ld\n", j);
			}
		}
	}
	return (0);
}
