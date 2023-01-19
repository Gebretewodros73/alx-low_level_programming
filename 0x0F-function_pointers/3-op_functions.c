#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 *op_add - Return sum
 * @a: first number
 * @b: second number
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - Return subtract
 * @a: first number
 * @b: second number
 * Return: subtract
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - Return multiplie
 * @a: first number
 * @b: second number
 * Return: multiplie
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - Return division
 * @a: first number
 * @b: second number
 * Return: sum
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - Return modullus
 * @a: first number
 * @b: second number
 * Return: moduleu
 */
int op_mod(int a, int b)
{
	return (a % b);
}

