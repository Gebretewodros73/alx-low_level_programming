#include "main.h"
#include<stdio.h>
/**
 *reverse_array - revers array
 *@a: array to revers
 *@n: max of array
 *Return: returns Anything
 **/
void reverse_array(int *a, int n)
{
	int i = n - 1;

	while (i >= 0)
	{
		if (i != n - 1)
			printf(", ");
		printf("%d", a[i]);
		i--;
	}
}
