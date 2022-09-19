#include "main.h"

/**
 * print_square - print a square in the terminal
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int line;
	int num;

	for (line = 0; line < size; ++line)
	{
		for (num = 0; num < size; ++num)
			_putchar('#');
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
