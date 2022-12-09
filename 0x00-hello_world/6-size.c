#include<stdio.h>
/**
 * main - This desplay size of fucnctions
 * Return: This returns zero
 */
int main(void)
{
	int sizeofint;
	float sizeoffloat;
	double sizeofdoubel;
	char sizeofchar;

	printf("size of int: %ld bytes\n", sizeof(sizeofint));
	printf("size of float: %ld bytes\n", sizeof(sizeoffloat));
	printf("size of double: %ld bytes\n", sizeof(sizeofdouble));
	printf("size of char: %ld bytes\n", sizeof(sizeofchar));
	return (0);
}

