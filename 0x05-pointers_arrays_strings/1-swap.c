#include "main.h"
/**
 * swap_int - swaps numbers
 * @a: the first number
 * @b: the second number
 * Return: returns the swap value
 */
void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
