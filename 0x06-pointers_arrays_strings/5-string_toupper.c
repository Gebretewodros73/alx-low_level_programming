#include "main.h"
#include<stdio.h>
/**
 *string_toupper - character to upper
 *@str: lower *Return: returns Anything
 *Return: upper case
 **/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
