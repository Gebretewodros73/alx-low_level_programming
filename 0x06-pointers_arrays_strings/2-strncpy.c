#include "main.h"
/**
 *_strncpy - length of string
 *@src: string to count
 *@dest: string to return
 *@n: the limit of scr
 *Return: the length of string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}
	for (; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
