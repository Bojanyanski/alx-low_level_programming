#include "main.h"

/**
 * print_alphabet_x10 - Print
 *
 *
 * Return: (0)
 */
void print_alphabet_x10(void)
{
	int QQ = 0;
	char c = 'a';

	while (QQ < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);

		}

	_putchar('\n');
	QQ++;

	}
}


