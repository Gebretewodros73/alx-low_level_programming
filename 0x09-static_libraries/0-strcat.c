#include "main.h"
/**
 *_strcat - length of string
 *@src: string to count
 *@dest: string to return
 *Return: the length of string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, a = 0;

	while (*(dest + i) != 0)
	{
		i++;
	}
	while (*(src + a) != 0)
	{
		*(dest + i) = *(src + a);
		i++;
		a++;
	}
	return (dest);
}
