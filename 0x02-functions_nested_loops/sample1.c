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
			*j = 120;
			while(*j == '\0')
			{
				putchar(*j++);
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			*j = i;
			while(*j == '\0')
			{
				putchar(*j++);
			}
		}
	}
	putchar('\n');
	return (0);
}
