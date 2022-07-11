#include "main.h"
#include <stdio.h>

/**
 * rev_string - This fuction print a string reverser
 *
 * @s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
	int i, j, k, temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	k = 0;
	j = i - 1;

	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}
