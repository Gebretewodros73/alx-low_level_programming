#include<stdio.h>
/**
 * _strlen - length of string
 *@s: string to count
 *Return: the length of string
 */
int main(void)
{
	int i = 0;
	char *s = "My first strlen!", a[16];
	
	while (i != 20)
	{
		a[i] = *(s + i);
		printf("%c", a[i]);
		i++;
	}
	putchar('0' + a[17]);
	printf("\n");
	return 0;
}
