#include <stdio.h>

/**
 * main - entry point
 *
 * description: print a-z in revers.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
