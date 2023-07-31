#include "main.h"


/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; s[b] >= '\0' ; b++)
	{
		if (s[b] == c)
		{
			return (s + b);
		}
	}

	return ('\0');
}
