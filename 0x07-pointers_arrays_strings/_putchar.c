#include<unistd.h>
/**
 * _putchar - t to a standard out put
 * Return: returns 1
 */

int _putchar(char t)
{
	return (write(1, &t, 1));
}
