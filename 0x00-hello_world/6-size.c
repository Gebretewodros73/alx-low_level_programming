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


	printf("size of a char: %ld byte(s)\n", sizeof(sizeofchar));
	printf("Size of an int: %ld byte(s)\n", sizeof(sizeofint));
	printf("Size of a long int: %ld byte(s)\n", sizeof(sizeofdouble));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(sizeofldouble));
	printf("Size of a float: %ld byte(s)\n", sizeof(sizeoffloat));
	return (0);
}
