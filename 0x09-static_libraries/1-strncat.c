#include "main.h"
/**
 *_strncat - length of string
 *@src: string to count
 *@dest: string to return
 *@n: the limit of scr
 *Return: the length of string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, a = 0;

	while (*(dest + i) != 0)
	{
		i++;
	}
	while (a < n && *(src + a) != '\0')
	{
		*(dest + i) = *(src + a);
		i++;
		a++;
	}
	*(dest + i) = '\0';
	return (dest);
}
