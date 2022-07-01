#include <stdio.h>
/**
 * main- Entry point
 * @void: Null value
 *
 * Description: print alphabet lowercase
 * Return: zero value
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
