#include<stdio.h>
/**
 * main - print prime factor of a number
 * Return: return zero
 */
int main(void)
{
	long int i, j, t, d, s;

	printf("input your number\n");
	scanf("%ld", &i);
	if (i < 0)
	{
		s= i;
		i = i * -1;
	}
	for (j = 2 ; j <= i; j++)
	{
		d = j;
		t = i % j;
		if (t == 0)
		{
			if (i != j){
				if (s < 0)
				{
					d = j * -1;
				}
				printf("%ld,", d);
				i = i / j;
				j = j - 1;
			}
			else
			{
				if (s < 0)
				{
					d = j * -1;
				}
				printf("%ld", d);
			}
		}

	}
	printf("\n");
	return (0);
}
