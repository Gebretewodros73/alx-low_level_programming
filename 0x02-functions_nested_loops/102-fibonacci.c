#include<stdio.h>
/**
 * main - fibonians up 50
 * Return: return zero
 */
int main(void)
{
	long int i, j, fb[50];

	fb[1] = 1;
	fb[2] = 2;

	printf("%ld, %ld, ", fb[1], fb[2]);

	for (i = 3; i <= 50; i++)
	{
		fb[i] = fb[i - 1] + fb[i - 2];
		if (i != 50)
		{
			printf("%ld, ", fb[i]);
		}
		else
		{
			printf("%ld\n", fb[i]);
		}
	}
	return (0);
}
