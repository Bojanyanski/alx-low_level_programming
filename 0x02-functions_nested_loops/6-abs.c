#include "main.h"
#include <stdio.h>

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: int type number
 * Return: absolute value of @n
 */
int _abs(int n)
{
	if (n < 1)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
