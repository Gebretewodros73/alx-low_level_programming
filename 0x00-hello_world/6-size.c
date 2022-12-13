#include<stdio.h>
/**
 * main - This desplay size of fucnctions
 * Return: This returns zero
 */
int main(void)
{
	char sizeofchar;
	int sizeofint;
	long sizeofdouble;
	long long sizeofldouble;
	float sizeoffloat;


	printf("size of char: %ld bytes\n", sizeof(sizeofchar));
	printf("size of int: %ld bytes\n", sizeof(sizeofint));
	printf("size of long: %ld bytes\n", sizeof(sizeofdouble));
	printf("size of long long: %ld bytes\n", sizeof(sizeofldouble));
	printf("size of float: %ld bytes\n", sizeof(sizeoffloat));
	return (0);
}
