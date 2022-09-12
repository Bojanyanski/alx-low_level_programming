#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h, low;

	for (h = '0'; h <= '9'; h++)
	{
		putchar(h);

	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
