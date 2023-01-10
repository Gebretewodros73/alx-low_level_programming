#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - initialize with a specific char
 * @size: size of char
 * @c: input char
 */
char *create_array(unsigned int size, char c)
{
	char *bu;
	unsigned int po;

	if (size == 0)
		return(NULL);
	bu = (char *) malloc(size * sizeof(c));

	if (bu == 0)
		return(NULL);
	else
	{
		po = 0;
		while(po < size)
		{
			*(bu + po) = c;
			po++;
		}
		return(bu);
	}
}
