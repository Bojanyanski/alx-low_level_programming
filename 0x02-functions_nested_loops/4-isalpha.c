#include "main.h"

/**
 * _isalpha: a function that checks for alphabetic character
 * @c: c is an ASCII character
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c = 97 && c <=122)
	{
		return (1);
	}
		else if (c = 65 && c <= 90)
		{
		return (1);
		}
	else
	{
		return (0);
	}
}
