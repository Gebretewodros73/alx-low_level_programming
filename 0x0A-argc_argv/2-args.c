#include<stdio.h>
/**
 * main - returns name
 * Return: zero
 * @argc: count
 * @argv: vector
 */
int main(int argc, char *argv[])
{
	int i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	(void)argc;
	return (0);
}
