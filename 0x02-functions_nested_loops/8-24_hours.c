#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int H;
	int M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			if (H < 10)
			{
				_putchar('0');
				_putchar(H);
			}
			else if (H >= 10)
			{
				_putchar(H / 10);
				_putchar(H % 10);
			}
			if (M < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(M);
			}
			else if (M >= 10)
			{
				_putchar(':');
				_putchar(M / 10);
				_putchar(M % 10);
			}
			putchar('\n');
		}
	}
}

