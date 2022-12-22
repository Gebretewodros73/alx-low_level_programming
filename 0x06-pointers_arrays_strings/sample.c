#include<stdio.h>
/**
 * main - desplay array
 * Return: return zero
 */
int main(void)
{
	char i, a[100];
	char b[100];
	
	for(i = 0; i <= 15; i++)
	{
		printf("%s   %d\n", a[i], b[i]);
	}
	for(; i <= 20; i++)
	{
		printf("%s   %d\n", a[i], b[i]);
	}
	return 0;
}
