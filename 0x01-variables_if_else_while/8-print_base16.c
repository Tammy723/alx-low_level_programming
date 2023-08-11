#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int digit = 48; /* 48; decimal represntative of 0*/

	while (digit <= 102) /* 102; decimal reprentative of f*/
	{
		putchar(digit);

		/* after 9 we jump to 96*/
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
