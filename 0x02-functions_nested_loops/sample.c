#include<stdio.h>
/**
 * main - print number toward 98
 * Return: return zero
 */
int main(void)
{
	int *j, i, n;
	
	scanf("%d", &n);
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
	putchar('\n');
	return (0);
}
