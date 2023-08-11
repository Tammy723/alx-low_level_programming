#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints single digit numbers using putchar
 *
 * Returm: 0 (Success)
*/

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		/* convert digits into ASCII representation*/
		putchar(number + '0');
		number++;
	}
	putchar('\n');

	return (0);
}
