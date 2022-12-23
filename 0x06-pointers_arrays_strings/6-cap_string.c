#include "main.h"
#include<stdio.h>
/**
 *cap_string - character to upper
 *@s: lower 
 *Return: capitalization
 **/
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == '\t' || s[i - 1] == ' ') && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	s[i] = '\0';
	return (s);
}
