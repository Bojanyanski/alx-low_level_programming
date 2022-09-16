#include "main.h"
#include <stdio.h>

/**
 * _isdigit - a function that checks for digit
 * @c: digit to be checked
 * Return: 1 if c is a digit, otherwise return 0
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
