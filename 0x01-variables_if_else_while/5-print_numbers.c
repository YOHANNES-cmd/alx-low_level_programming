#include <stdio.h>
/**
 * main- Entry point
 * @void: Null value
 *
 * Descripition: print numbers from 0 to 9
 * Return: Zero value
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
