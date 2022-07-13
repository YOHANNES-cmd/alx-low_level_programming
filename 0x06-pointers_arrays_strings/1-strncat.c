#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings. it will use at
 *         most n bytes from src
 *
 * @dest: This is the output dest
 * @src: This is the input src
 * @n: This is the number byte from src
 *
 * Return: the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, count;

	for (index = 0; dst[index] != '\0'; index++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[index] = src[count];
		index++;
	}
	if (count < n)
	{
		dest[index] = '\0';
	}
	return (dest);
}
