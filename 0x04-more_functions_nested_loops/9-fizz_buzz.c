#include<stdio.h>
/**
 * print_square - Fizz BUzz FizzBuzz
 * Return: zero
 */

int main(void)
{
	int i, j, h;

	for (i = 1;i <= 100; i++)
	{
		j = i % 3;
		h = i % 5;
		if (j == 0 && h == 0)
			printf("FizzBuzz ");
		else if (j == 0)
			printf("Fizz ");
		else if (h == 0)
			printf("Buzz ");
		else if (i != 100)
			printf("%d ", i);
	}
	printf("\b\n");
	return (0);
}
