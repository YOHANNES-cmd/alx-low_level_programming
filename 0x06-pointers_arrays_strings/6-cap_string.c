#include "main.h"
/**
 * cap_string - write a function that capitalizes all word of a string.
 * @s: This is the input string
 *
 * Return: s(string capitalized)
 */
char *cap_string(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n'
				|| s[count] == ',' || s[count] == ';' || s[count] == '.'
				|| s[count] == '.' || s[count] == '!' || s[count] == '?'
				|| s[count] == '"' || s[count] == '(' || s[count] == ')'
				|| s[count] == '{' || s[count] == '}')
		{
			if (s[count + 1] >= 97 && s[count + 1] <= 122)
			{
				s[count + 1] = s[count + 1] - 32;
			}
		}
		count++;
	}
	return (s);
}
