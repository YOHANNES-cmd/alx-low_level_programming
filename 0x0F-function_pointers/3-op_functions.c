#include "3-calc.h"
<<<<<<< HEAD
<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - ..
 * @a: ..
 * @b: ...
 * Return: ...
=======
=======
#include <stdlib.h>
#include <stdio.h>
>>>>>>> 37c69a4a6f8f011cd307fcaaa3f928720abe0a6d

/**
 * op_add - ...
 * @a: ...
 * @b: ...
 *
<<<<<<< HEAD
 * Return: sum of a and b
>>>>>>> 8ea2bb6b273b930ff1b58b15e0d29a3c42fe3bab
=======
 * Return: ...
>>>>>>> 37c69a4a6f8f011cd307fcaaa3f928720abe0a6d
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - ...
 * @a: ...
 * @b: ...
 *
 * Return: ...
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - ...
 * @a: ...
 * @b: ...
 *
 *  Return: ...
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - ...
 * @a: ...
 * @b: ...
 *
 *  Return: ...
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
 * op_mod - ...
 * @a: ...
 * @b: ...
 *
 * Return: ...
 */
int op_mod(int a, int b)
{
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 37c69a4a6f8f011cd307fcaaa3f928720abe0a6d
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
<<<<<<< HEAD
=======
>>>>>>> 8ea2bb6b273b930ff1b58b15e0d29a3c42fe3bab
=======

>>>>>>> 37c69a4a6f8f011cd307fcaaa3f928720abe0a6d
	return (a % b);
}
