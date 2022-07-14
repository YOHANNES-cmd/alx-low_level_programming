#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_number - prints an integer only using the putchar function
 *
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
