#include <stdio.h>

/**
 * main - print digit from 0 to 9
 * Return: always 0.
 */
int main(void)
{
	int i;

	while (i < 10 && i >= 0)
	{
		printf("%d", i);
		i++;
	}
	puts("\n");
	return (0);
}
