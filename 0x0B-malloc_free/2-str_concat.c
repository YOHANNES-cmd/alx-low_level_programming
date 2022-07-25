#include "main.h"
/**
 *  str_concat - a function that concatenates two strings.
 *  @s1: first string
 *  @s2: second string
 *
 *  Return: NULL in case of failure , but pointer to new string in
 *  case of success
 */
char *str_concat(char *s1, char *s2)
{
	int a, b;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	s = (char *) malloc(((a + b) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		s[a] = s2[b];
		a++;
	}
	return (s);
}
