#include "main.h"
/**
 * wildcmp - Compares two strings
 * @s1: character 1
 * @s2: character 2
 *
 * Return: 1 if identical and 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (!(*s1) && (!(*s2)))
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		if (!(*s1))
		{
			return (0);
		}
		if (wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}
		return (0);
}
