#include "main.h"

/**
 * print_last_digit - a function that printd the last digit
 * @n: int tyoe number
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = (-1 * (n % 10))
		_putchar(r + '0');
		return (r);
	}
	else
	{
		r = n % 10
		_putchar(r + '0');
		return (r);
	}
}
