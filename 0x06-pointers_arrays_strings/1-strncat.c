#include "main.h"
/**
 *_strcat - length of string
 *@src: string to count
 *@dest: string to return
 *@n: the limit of scr
 *Return: the length of string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 1, a = 0;

	while (*(dest + i) != 0)
	{
		i++;
	}
	while (a < n && *(src + a) != 0)
	{
		*(dest + i) = *(src + a);
		i++;
		a++;
	}
	return (dest);
}
