#include "main.h"
#include<stdio.h>
/**
 * print_array - prints the othe half
 * @a: array
 * @n: number of array
 * Return: Anything
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == 0)
			printf("%d,", a[i]);
		else if (i != n - 1)
			printf(" %d,", a[i]);
		else
			printf(" %d", a[i]);
		i++;
	}
	printf("\n");
}
