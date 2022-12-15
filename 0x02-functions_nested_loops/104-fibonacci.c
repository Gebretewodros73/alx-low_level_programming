#include<stdio.h>
/**
 * main - fibonians up 50
 * Return: return zero
 */
int main(void)
{
	long int i, fb1, fb2, fb;
	int n;

	fb1 = 1;
	fb2 = 2;
	n = 98;

	/*scanf("%d", &n);*/
	printf("%ld, %ld, ", fb1, fb2);

	for (i = 3; i <= n; i++)
	{
		fb = fb1 + fb2;
		if (i != n)
		{
			printf("%ld, ", fb);
		}
		else
		{
			printf("%ld\n", fb);
		}
		fb1 = fb2;
		fb2 = fb;
	}
	return (0);
}
