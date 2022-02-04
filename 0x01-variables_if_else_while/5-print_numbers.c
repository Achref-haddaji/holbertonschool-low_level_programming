#include <stdio.h>

/**
 * main - print digit from 0 to 9
 * Return: always 0.
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	puts("\n");
	return (0);
}
