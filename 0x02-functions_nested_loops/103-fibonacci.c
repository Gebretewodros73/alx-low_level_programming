#include<stdio.h>
/**
 * main - fibonians up 50
 * Return: return zero
 */
int main(void)
{
	long int fbs, i, fb[32];

	fb[1] = 1;
	fb[2] = 2;
	fbs = 3;

	for (i = 3; i <= 30; i++)
	{
		fb[i] = fb[i - 1] + fb[i - 2];
		fbs = fbs + fb[i];
	}
	printf("%ld\n", fbs);
	return (0);
}
