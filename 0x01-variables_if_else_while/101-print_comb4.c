#include <stdio.h>

/**
 * main - The success combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
			}
		}
		else if
		{
			putchar('\n');
		}
	}
	return (0);
}
