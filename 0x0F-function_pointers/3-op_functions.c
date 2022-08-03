#include "3-calc.h"
/**
 * op_add - adds two numb.
 * @a: first numb
 * @b: second numb.
 *
 * Return: result.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two numbers.
 * @a: first numb.
 * @b: second numb
 *
 * Return: result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numb.
 * @a: first numb.
 * @b: second numb.
 *
 * Return: result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divids two numb.
 * @a: first numb.
 * @b: second numb.
 *
 * Return: result.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculates the module of two numbers.
 * @a: first numb.
 * @b: second numb.
 *
 * Return: reminder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
