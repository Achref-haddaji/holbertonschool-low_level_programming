#include "main.h"

/**
 * _strcpy - copies string pointed by src to the buffer point to by dest
 * @dest: destination
 * @src: string to copy
 * Return: the point to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
