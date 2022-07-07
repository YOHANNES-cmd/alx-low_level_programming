#include "main.h"

/**
 * print_numbers -> print numbers
 * Return: nothing
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		_putchar(x + '0');
	_putchar('\n');
}
