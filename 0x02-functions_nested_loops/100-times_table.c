#include "main.h"
#include<stdio.h>
/**
 * times_table - times table print
 * Return: return time table value
 */
void print_times_table(int n)
{
	int i, j, t;

	t = 0;
	if (n > 0 && n < 15)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			t = i * j;
			if (j != 0 && t <= 9)
				printf("   ");
			else if (j != 0 && t > 9 && t <= 99)
				printf("  ");
			else if (j != 0)
				printf(" ");
			printf("%d", t);
			if (j != n)
				printf(",");
		}
		printf("\n");
	}
	printf("\n");
	}
}

