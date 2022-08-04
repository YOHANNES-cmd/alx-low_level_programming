#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum
 * @n: named parameter of the func
 *
 * Return: result.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list m;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(m, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(m, int);
	}

	va_end(m);
	return (sum);
}
