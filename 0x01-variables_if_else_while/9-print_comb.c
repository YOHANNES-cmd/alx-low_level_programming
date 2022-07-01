#include <stdio.h>
/**
 * main - Entry point
 * @void: Null value
 *
 * Description: print numbers from 0 to 9 separeated by comma and space
 * Return: zero value
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
