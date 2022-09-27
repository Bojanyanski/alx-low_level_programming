#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence
 * of the character c in the string s, or NULL if the
 * of the character c in the string s, or NULL if the
 *
 * @s:string targeted
 * @c:character targeted
 * Return: returns pointer to first occcurence of c
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);

	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
