#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: This is the input string
 *
 * Return: function returns a pointer to the duplicated string. It returns
 *           NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *s;
	int a, b;

	if (str == 0)
		return (NULL);

	for (a = 0; str[a]; a++)
		b++;
	s = malloc(sizeof(char) * (b + 1));

	if (s == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
	{
		s[a] = str[a];
	}
	s[b] = '\0';

	return (s);
}
