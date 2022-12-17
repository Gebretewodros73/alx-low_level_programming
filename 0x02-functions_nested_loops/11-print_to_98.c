#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - all numbers to 98.
 * @n: number to start from
 * Return: return numbers to 98.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	printf("\n");
}
