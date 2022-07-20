#include "main.h"
/**
 * strlen_rec - string length
 * @str: char
 *
 * Return: the integer length
 */

int strlen_rec(char *str)
{
	if (*str)
	{
		str++;
		return (1 + strlen_rec(str));
	}
	return (0);
}
/**
 * helper_pal - Returns Palindrone
 * @str: character
 * @length: int
 * @count: int
 *
 * Return: the int length
 */
int helper_pal(char *str, int length, int count)
{
	if (count >= length)
	{
		return (1);
	}
	if (str[length] == str[count])
	{
		return (helper_pal(str, length - 1, count + 1));
	}
	return (0);
}
/**
 * is_palindrome - return 1 if a string is palindrome 0 if not
 * @s: char
 * Return: 1 0r 0
 */
int is_palindrome(char *s)
{
	int length = strlen_rec(s);
	int count = 0;

	return (helper_pal(s, length - 1, count));
}
