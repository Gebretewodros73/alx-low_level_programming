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
	printf("size of a int: %ld byte(s)\n", sizeof(sizeofint));
	printf("size of a long: %ld byte(s)\n", sizeof(sizeofdouble));
	printf("size of a long long: %ld byte(s)\n", sizeof(sizeofldouble));
	printf("size of a float: %ld byte(s)\n", sizeof(sizeoffloat));
	return (0);
}
