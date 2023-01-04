#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer char
 */
void set_string(char **s, char *to)
{
	*s = malloc(sizeof(char) * (strlen(to) + 1));
	if (*s == NULL)
	{
		return;
	}
	strcpy(*s, to);
}
