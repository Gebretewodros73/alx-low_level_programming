#include<stdio.h>
/**
 * main - print prime factor of a number
 * Return: return zero
 */
int main(void)
{
	int i, j, t;

	/*printf("input your number");
	printf("\n");
	scanf("%d", &i);
	printf("\n");*/
	for (j = 2; j <= 1231952; j++)
	{
		t = 1231952 % j;

		if (t = 0)
		{
			printf("The prime factor of the number are : %d",j);
			printf(",");
			j = j - 1;
			i = i / j;
		}
	}
	return (0);
}
