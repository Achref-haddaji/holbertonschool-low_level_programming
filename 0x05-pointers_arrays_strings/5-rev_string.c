#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j;
	char c;

	for (i = 0; s[i] != 0; i++)
	{
	}

	j = 0;
	i = i - 1;
	while (j < i)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		j++;
		i--;
	}
}
