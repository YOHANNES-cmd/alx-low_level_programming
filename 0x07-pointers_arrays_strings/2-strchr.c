#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: pointer to string.
 * @c: character to be fount.
 * Return: pointer to first occurence of the character.
 * or null
 */
char *_strchr(char *s, char c)
{
	char *p; /* pointer to char*/
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == c)
		{
			p = &s[counter];
			break;
		}
	}
	if (s[counter] == c)
	{
		p = &s[counter];
	}
	return (p);
}
