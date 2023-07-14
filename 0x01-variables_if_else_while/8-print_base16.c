#include <stdio.h>

/**
 * main - entry point
 *
 * description: print numbers of  base16 lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 48; /*48; decemal rep of 0*/

	while (digit <= 102) /*102; decemal rep of f*/
	{
		putchar(digit);

		/* after 9 we jump till 96; */
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
