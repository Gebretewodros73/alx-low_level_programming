#include<stdio.h>
/**
 * main - print prime factor of a number
 * Return: return zero
 */
int main(void)
{
	long int i, j, t;

	printf("input your number\n");
	scanf("%ld", &i);
	for (j = 2; j <= i; j++)
	{
		t = i % j;
		if (t == 0)
		{
			if (i != j){
				printf("%ld,", j);
				i = i / j;
				j = j - 1;
			}
			else
			{
				printf("%ld", j);
			}
		}
		else{
			continue ;
		}

	}
	printf("\n");
	return (0);
}
