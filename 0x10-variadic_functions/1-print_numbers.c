#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integer
 *
 * Return: noting.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list m;

	va_start(m, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(m, int));
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(m);
}
