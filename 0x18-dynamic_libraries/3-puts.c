#include "main.h"

/**
 * _puts - put string
 * @s: string to process
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}
