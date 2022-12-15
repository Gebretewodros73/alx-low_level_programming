#include<stdio.h>
/**
 * main - fibonians up 50
 * Return: return zero
 */
int main(void)
{
	long int fbs, i, fb[50];

	fb[1] = 1;
	fb[2] = 2;
	fbs = 2;

	for (i = 3; i <= 32; i++)
	{
		fb[i] = fb[i - 1] + fb[i - 2];
		if (fb[i] % 2 == 0)
			fbs = fbs + fb[i];
	}
	printf("%ld\n", fbs);
	return (0);
}
